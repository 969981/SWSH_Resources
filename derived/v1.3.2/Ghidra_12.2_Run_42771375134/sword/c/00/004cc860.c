/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cc860; name: FUN_004cc860
 */


undefined8 FUN_004cc860(long *param_1,char *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int local_28 [2];
  
  *param_2 = '\0';
  lVar5 = param_1[3];
  if (((*(byte *)(*(long *)(lVar5 + 0x1f8) + 0xc) >> 1 & 1) != 0) &&
     ((*(uint *)(lVar5 + 0x26b) >> 0x16 & 1) == 0)) {
    lVar6 = *(long *)(lVar5 + 0x290);
    iVar3 = *(int *)(lVar5 + 0x298);
    *(int *)(param_1 + 0xd) = iVar3;
    bVar2 = lVar6 != 0 && iVar3 != 0;
    *param_2 = bVar2;
    *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd | bVar2 << 1;
    if (*param_2 != '\0') {
      *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 0x10;
      uVar4 = (**(code **)(*param_1 + 0xf0))(param_1,lVar6);
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      uVar4 = FUN_004cca20(param_1,lVar6,1);
      if ((int)uVar4 != 1) {
        return uVar4;
      }
      if ((short)param_1[0x10] == 0) {
        lVar5 = param_1[0xd];
        iVar3 = (**(code **)(*(long *)param_1[0xb] + 0x78))
                          ((long *)param_1[0xb],(int)lVar5,0,local_28);
        if (iVar3 != 1) {
          return 2;
        }
        *(int *)(param_1 + 0xe) = local_28[0];
        *(int *)((long)param_1 + 0x74) = (int)lVar5 - local_28[0];
      }
      uVar1 = *(uint *)(param_1 + 6);
      param_1[0xc] = param_1[0xc] + (ulong)uVar1;
      *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar1;
      *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar1;
    }
  }
  return 1;
}


