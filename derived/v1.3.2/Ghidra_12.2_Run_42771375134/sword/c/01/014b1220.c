/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b1220; name: FUN_014b1220
 */


void FUN_014b1220(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long local_18;
  
  lVar1 = *param_2;
  if (lVar1 < -0x709832ba0bfa2992) {
    if ((lVar1 != -0x709834ba0bfa2cf8) && (lVar1 != -0x709833ba0bfa2b45)) {
      return;
    }
  }
  else if ((lVar1 != -0x57753fb9fdfaf46b) && (lVar1 != -0x709832ba0bfa2992)) {
    return;
  }
  lVar1 = *param_1;
  if (lVar1 < -0x709832ba0bfa2992) {
    if ((lVar1 != -0x709834ba0bfa2cf8) && (lVar1 != -0x709833ba0bfa2b45)) {
LAB_014b1314:
      local_30 = 0xcd8e97596eec05a1;
      pcStack_28 = "WOODS";
      local_38 = 0;
      local_20 = 5;
      local_18 = 0;
      FUN_014aed90(&local_30,&local_38);
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
      }
      return;
    }
  }
  else if ((lVar1 != -0x709832ba0bfa2992) && (lVar1 != -0x57753fb9fdfaf46b)) goto LAB_014b1314;
  return;
}


