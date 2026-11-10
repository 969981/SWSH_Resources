/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cc580; name: FUN_004cc580
 */


int FUN_004cc580(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 local_38;
  
  plVar1 = param_1 + 0xd;
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 0x26b) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  while ((iVar4 = (**(code **)(*(long *)param_1[0xb] + 0x80))
                            ((long *)param_1[0xb],&local_38,plVar1,0), iVar4 == 0x11 ||
         (iVar4 == 0x2d))) {
    iVar4 = (**(code **)(*param_1 + 0xf0))(param_1,local_38);
    if (iVar4 != 0x3f) {
      if (iVar4 == 1) {
        if ((*(uint *)(param_1[3] + 0x26b) >> 0x16 & 1) == 0) {
          iVar5 = (**(code **)(*(long *)param_1[0xb] + 0x70))((long *)param_1[0xb],0);
          iVar6 = *(int *)((long)param_1 + 0x74);
          iVar4 = FUN_004cca20(param_1,local_38,0);
          uVar3 = (int)param_1[6] - (iVar6 + iVar5);
          param_1[0xc] = param_1[0xc] + (ulong)uVar3;
          *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar3;
          *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar3;
        }
        else {
          iVar6 = FUN_004cc190(param_1);
          iVar4 = FUN_004cd000(param_1,iVar6,param_1 + 5);
          if (iVar4 == 1) {
            lVar7 = param_1[3];
            iVar4 = 1;
            *(int *)(lVar7 + 0x264) = iVar6 - (int)param_1[5];
            puVar2 = (uint *)(lVar7 + 0x26b);
            *puVar2 = *puVar2 & 0xfe3fffff;
            iVar6 = (int)*plVar1;
          }
          else {
            iVar4 = 2;
            iVar6 = (int)*plVar1;
          }
          if (iVar6 != 0) {
            if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
              (**(code **)(*(long *)param_1[0xb] + 0x88))();
            }
            else {
              *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
            }
            *(int *)plVar1 = 0;
          }
        }
        *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 4;
      }
      return iVar4;
    }
  }
  if (iVar4 == 0x2e) {
    return 0x3f;
  }
  return 2;
}


