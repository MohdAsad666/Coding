const redux = require("redux");
const createStore = redux.createStore;
const combineReducers = redux.combineReducers;

const INCREASE_PROP1 = "INCREASE_PROP1";
const INCREASE_PROP2 = "INCREASE_PROP2";

const increaseProp1 = () => {
  return {
    type: INCREASE_PROP1,
  };
};

const increaseProp2 = () => {
  return {
    type: INCREASE_PROP2,
  };
};

const initialProp1State = {
  prop1: 1,
};
const initialProp2State = {
  prop2: 1,
};

const reducerProp1 = (state = initialProp1State, action) => {
  switch (action.type) {
    case INCREASE_PROP1:
      return {
        ...state,
        prop1: state.prop1 + 1,
      };

    default:
      return state;
  }
};
const reducerProp2 = (state = initialProp2State, action) => {
  switch (action.type) {
    case INCREASE_PROP2:
      return {
        ...state,
        prop2: state.prop2 + 1,
      };

    default:
      return state;
  }
};

const rootReducer = combineReducers({
  prop1: reducerProp1,
  prop2: reducerProp2,
});

const store = createStore(rootReducer);
console.log(store);
const unsubscribe = store.subscribe(() => {
  console.log(store.getState());
});

store.dispatch(increaseProp1());
store.dispatch(increaseProp1());
store.dispatch(increaseProp1());
store.dispatch(increaseProp1());
unsubscribe();
