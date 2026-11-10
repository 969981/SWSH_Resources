/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c5b70; name: FUN_010c5b70
 */


long * FUN_010c5b70(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    plVar2 = (long *)param_1[3];
    if (plVar2 != (long *)param_2[3]) {
      lVar1 = *param_1;
      lVar3 = param_1[1];
      if (param_1[1] == lVar1) {
        lVar3 = lVar1;
      }
      else {
        do {
          if (*(long *)(lVar3 + -8) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar3 + -8) + 0x48) + 0x18))();
            *(undefined8 *)(lVar3 + -8) = 0;
          }
          if (*(long *)(lVar3 + -0x10) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar3 + -0x10) + 0x48) + 0x18))();
            *(undefined8 *)(lVar3 + -0x10) = 0;
          }
          lVar4 = lVar3 + -0x18;
          if (*(long *)(lVar3 + -0x18) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar3 + -0x18) + 0x48) + 0x18))();
            *(undefined8 *)(lVar3 + -0x18) = 0;
          }
          lVar3 = lVar4;
        } while (lVar1 != lVar4);
        plVar2 = (long *)param_1[3];
        lVar3 = *param_1;
      }
      param_1[1] = lVar1;
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3,param_1[2] - lVar3,8);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      plVar2 = (long *)param_2[3];
    }
    param_1[3] = (long)plVar2;
    FUN_010c5c70(param_1,*param_2,param_2[1]);
  }
  return param_1;
}


