/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047de60; name: FUN_0047de60
 */


undefined8 FUN_0047de60(byte param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar6 = PTR_DAT_02713220;
  puVar5 = PTR_DAT_02712ec8;
  bVar3 = *PTR_DAT_02712ec8;
  if (((param_1 & 1) == bVar3) && ((param_2 & 1) == *PTR_DAT_02712ed0)) {
    uVar8 = 3;
  }
  else {
    uVar2 = *(uint *)PTR_DAT_02712e58;
    uVar1 = *(uint *)PTR_DAT_02713220;
    if (*(uint *)PTR_DAT_02713220 <= param_3) {
      uVar1 = param_3;
    }
    *(uint *)PTR_DAT_02713220 = uVar1;
    iVar4 = uVar1 - uVar2;
    if (uVar1 < uVar2 || iVar4 == 0) {
      *(undefined4 *)puVar6 = 0;
      *PTR_DAT_02712ed0 = bVar3 == 0 & (param_1 ^ 0xff) | param_2 & 1;
      *puVar5 = param_1 & 1;
      puVar5 = PTR_DAT_02712de0;
      if ((param_1 & 1) != 0) {
        param_2 = param_2 & 1;
        goto LAB_0047df58;
      }
      for (lVar9 = *(long *)(PTR_DAT_02713240 + 0x10); lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
        if (1 < *(int *)(lVar9 + 0x120) - 1U) {
          *(undefined4 *)(lVar9 + 0x120) = 2;
          uVar7 = FUN_0042f050();
          if ((uVar7 & 1) != 0) {
            FUN_00434ae0(*(long *)puVar5 + 0x80);
          }
        }
      }
      uVar8 = 1;
      FUN_0047ceb0(1);
    }
    else {
      *(int *)puVar6 = iVar4;
      FUN_0043ccf0(*(undefined8 *)PTR_DAT_02712de0,param_1 & 1,param_2 & 1);
      uVar8 = 1;
      if ((*puVar5 != '\0') && (*PTR_DAT_02712ed0 == '\0')) {
        param_2 = 1;
        *PTR_DAT_02712ed0 = 1;
        *puVar5 = 1;
LAB_0047df58:
        uVar8 = FUN_0047c380(param_2,1);
        return uVar8;
      }
    }
  }
  return uVar8;
}


