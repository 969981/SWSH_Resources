/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005635b0; name: FUN_005635b0
 */


int FUN_005635b0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined1 auStack_60 [16];
  
  if ((DAT_027605d1 & 1) == 0) {
    DAT_027605d1 = 1;
    DAT_027608e8 = "_LINEAR";
    DAT_027608f8 = "_REINHARD";
    DAT_02760900 = "_REINHARD_PREMAP";
    DAT_02760908 = "_REINHARDLUM";
    DAT_02760910 = "_REINHARDLUM_PREMAP";
    DAT_02760918 = &DAT_01ceb324;
    DAT_02760920 = "_LOG_PREMAP";
    DAT_02760928 = "_LOGLUM";
    DAT_02760930 = "_LOGLUM_PREMAP";
    DAT_02760938 = &DAT_01d38550;
    DAT_02760940 = "_SENSITOMETRIC_PREMAP";
    DAT_02760948 = "_REINHARD_LINEARSAT_PREMAP";
    DAT_02760950 = "_REINHARD_SENSITOMETRIC_PREMAP";
    DAT_02760958 = "_LINEARSAT";
    DAT_02760960 = "_ALPHALUM_PREMAP";
    DAT_027608f0 = "_LINEARSAT";
  }
  FUN_00550fe0(auStack_60,param_3);
  FUN_00551290(local_70,auStack_60);
  lVar4 = 0;
  iVar3 = 0;
  do {
    while( true ) {
      FUN_005515e0(local_70,local_70[0]);
      FUN_00551930(local_70,(&DAT_027608e8)[lVar4]);
      iVar2 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,local_68);
      iVar1 = iVar3;
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      *(int *)(param_2 + lVar4 * 4) = iVar2;
      if (iVar2 == 0) break;
      iVar2 = (**(code **)(*(long *)*param_1 + 0xe0))((long *)*param_1,iVar2);
      if (iVar2 < 0) {
        *(undefined4 *)(param_2 + lVar4 * 4) = 0;
      }
      else if ((*(int *)(param_2 + lVar4 * 4) != 0) &&
              (iVar3 = (**(code **)(*(long *)*param_1 + 0xd8))(), -1 < iVar3)) {
        iVar3 = iVar1;
      }
      lVar4 = lVar4 + 1;
      if (lVar4 == 0x10) goto LAB_005637c4;
    }
    iVar3 = -1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x10);
LAB_005637c4:
  FUN_00551380(local_70);
  FUN_00551380(auStack_60);
  return iVar3;
}


