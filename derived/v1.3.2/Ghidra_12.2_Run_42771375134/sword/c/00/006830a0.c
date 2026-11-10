/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006830a0; name: FUN_006830a0
 */


undefined8 FUN_006830a0(long *param_1,long *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  (**(code **)(*param_1 + 0x198))(param_1,*param_2,1);
  (**(code **)(*param_1 + 0x198))(param_1,param_2[1],1);
  (**(code **)(*param_1 + 400))(param_1,(int)param_2[2],1);
  (**(code **)(*param_1 + 400))(param_1,*(undefined4 *)((long)param_2 + 0x14),1);
  (**(code **)(*param_1 + 400))(param_1,(int)param_2[3],1);
  (**(code **)(*param_1 + 400))(param_1,*(undefined4 *)((long)param_2 + 0x1c),1);
  lVar1 = (**(code **)(*param_1 + 0x88))(param_1);
  uVar3 = (param_4 + lVar1) - 1U & -(long)param_4;
  lVar2 = uVar3 - lVar1;
  if ((lVar2 != 0 && lVar1 <= (long)uVar3) && (0 < lVar2)) {
    do {
      (**(code **)(*param_1 + 0x1a0))(param_1,0,1);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if ((int)param_2[2] == 0) {
    lVar2 = *param_2;
  }
  else {
    lVar2 = param_2[1];
  }
  if (0 < lVar2) {
    (**(code **)(*param_1 + 0x160))(param_1,param_3,lVar2,1);
  }
  return 1;
}


