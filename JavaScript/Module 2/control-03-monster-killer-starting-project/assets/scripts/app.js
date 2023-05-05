const ATTACK_VALUE = 10;
let ChoosenMaxLife = 100;
let currentMaxLife = ChoosenMaxLife;
let currentMaxPlayerLife = ChoosenMaxLife;
adjustHealthBars(currentMaxLife);
const attackHandler = () => {
  currentMaxLife -= dealMonsterDamage(ATTACK_VALUE);
  currentMaxPlayerLife -= dealPlayerDamage(ATTACK_VALUE)
};
attackBtn.addEventListener("click", attackHandler);
 