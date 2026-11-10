/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00621190; name: FUN_00621190
 */


ulong FUN_00621190(undefined8 *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint local_44;
  
  local_44 = 0;
  if (param_1 == (undefined8 *)0x0) {
    uVar8 = 0x21;
  }
  else {
    uVar8 = 6;
    if ((param_2 != (uint *)0x0) && (param_3 != (uint *)0x0)) {
      if (*(byte *)((long)param_2 + 0x1a) - 1 < 7) {
        uVar9 = *param_1;
        uVar2 = param_3[2];
        uVar1 = -uVar2;
        if (-1 < (int)uVar2) {
          uVar1 = uVar2;
        }
        *(undefined1 *)((long)param_3 + 0x1a) = 2;
        uVar3 = *param_2;
        uVar4 = *param_3;
        *param_3 = uVar3;
        param_3[1] = param_2[1];
        uVar2 = param_2[1];
        if (0 < param_4) {
          iVar7 = 0;
          if (param_4 != 0) {
            iVar7 = (int)uVar2 / param_4;
          }
          iVar6 = uVar2 - iVar7 * param_4;
          iVar7 = 0;
          if (iVar6 != 0) {
            iVar7 = param_4 - iVar6;
          }
          uVar2 = uVar2 + iVar7;
        }
        if (0 < (int)uVar2) {
          uVar8 = 0;
          if ((long)(int)uVar2 != 0) {
            uVar8 = 0xffffffffffffffff / (ulong)(long)(int)uVar2;
          }
          if (uVar8 < uVar3) {
            return 6;
          }
        }
        uVar9 = FUN_00608860(uVar9,1,uVar1 * uVar4,uVar2 * uVar3,*(undefined8 *)(param_3 + 4),
                             &local_44);
        *(undefined8 *)(param_3 + 4) = uVar9;
        if (local_44 != 0) {
          return (ulong)local_44;
        }
        uVar1 = -uVar2;
        if (-1 < (int)param_3[2]) {
          uVar1 = uVar2;
        }
        param_3[2] = uVar1;
        uVar8 = 0;
      }
      else {
        local_44 = 6;
      }
      if ((int)param_3[2] < 0) {
        bVar5 = *(byte *)((long)param_2 + 0x1a);
      }
      else {
        bVar5 = *(byte *)((long)param_2 + 0x1a);
      }
      if (bVar5 - 1 < 7) {
                    /* WARNING: Could not recover jumptable at 0x006212b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*(code *)(&DAT_021353b4 + *(int *)(&DAT_021353b4 + (ulong)(bVar5 - 1) * 4)))(uVar8)
        ;
        return uVar8;
      }
      uVar8 = (ulong)local_44;
    }
  }
  return uVar8;
}


