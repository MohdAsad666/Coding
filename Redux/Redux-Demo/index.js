const redux = require("redux");
const reduxLogger = require("redux-logger");

const createStore = redux.createStore;
const combineReducers = redux.combineReducers;
const logger = reduxLogger.createLogger();
const applyMiddleware = redux.applyMiddleware;

const BUY_CAKE = "BUY_CAKE";
const BUY_ICE_CREAM = "BUY_ICE_CREAM";

const buyCake = () => {
  return {
    type: BUY_CAKE,
  };
};

const buyIceCream = () => {
  return {
    type: BUY_ICE_CREAM,
  };
};

const intialCakeState = {
  numberOfCakes: 10,
};

const intialIceCreamState = {
  numberOfIceCream: 20,
};

const cakeReducer = (state = intialCakeState, action) => {
  switch (action.type) {
    case BUY_CAKE:
      return {
        ...state,
        numberOfCakes: state.numberOfCakes - 1,
      };

    default:
      return state;
  }
};

const IceCreamReducer = (state = intialIceCreamState, action) => {
  switch (action.type) {
    case BUY_ICE_CREAM:
      return {
        ...state,
        numberOfIceCream: state.numberOfIceCream - 1,
      };

    default:
      return state;
  }
};

const rootReducer = combineReducers({
  cake: cakeReducer,
  iceCream: IceCreamReducer,
});
const store = createStore(rootReducer, applyMiddleware(logger));
console.log("Initial State", store.getState());
const unsubscribe = store.subscribe(() => {
  // console.log("Updated State", store.getState());
});
store.dispatch(buyCake());
store.dispatch(buyCake());
store.dispatch(buyCake());
store.dispatch(buyIceCream());
store.dispatch(buyIceCream());
store.dispatch(buyIceCream());
unsubscribe();
 