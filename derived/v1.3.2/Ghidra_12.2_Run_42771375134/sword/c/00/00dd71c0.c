/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd71c0; name: FUN_00dd71c0
 */


uint FUN_00dd71c0(int *param_1)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  ulong uVar9;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar8 = (ushort *)((long)param_1 - (long)*param_1);
  uVar1 = *puVar8;
  if (uVar1 < 0xb) {
    uVar3 = 0;
LAB_00dd7214:
    uVar6 = 0;
    uVar5 = 0;
    local_18 = 0;
  }
  else {
    if ((ulong)puVar8[5] == 0) {
      uVar3 = 0;
      if (0x12 < uVar1) goto LAB_00dd71f8;
LAB_00dd7230:
      if (uVar1 < 0xd) goto LAB_00dd7214;
LAB_00dd7238:
      uVar5 = 0;
      uVar9 = (ulong)puVar8[6];
      local_18 = 0;
      if (uVar9 != 0) {
LAB_00dd7244:
        local_18 = *(undefined8 *)((long)param_1 + uVar9);
      }
    }
    else {
      uVar3 = *(undefined4 *)((long)param_1 + (ulong)puVar8[5]);
      if (uVar1 < 0x13) goto LAB_00dd7230;
LAB_00dd71f8:
      if ((ulong)puVar8[9] == 0) goto LAB_00dd7238;
      uVar5 = *(undefined4 *)((long)param_1 + (ulong)puVar8[9]);
      uVar9 = (ulong)puVar8[6];
      if (uVar9 != 0) goto LAB_00dd7244;
      local_18 = 0;
    }
    if (uVar1 < 0xf) {
      uVar6 = 0;
    }
    else {
      if ((ulong)puVar8[7] == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((long)param_1 + (ulong)puVar8[7]);
      }
      if (0x10 < uVar1) {
        if ((ulong)puVar8[8] == 0) {
          uVar7 = 0;
          if (0x16 < uVar1) goto LAB_00dd727c;
LAB_00dd72e0:
          local_20 = 0;
          if (0x14 < uVar1) {
            uVar1 = puVar8[10];
            goto joined_r0x00dd7290;
          }
        }
        else {
          uVar7 = *(undefined4 *)((long)param_1 + (ulong)puVar8[8]);
          if (uVar1 < 0x17) goto LAB_00dd72e0;
LAB_00dd727c:
          local_20 = 0;
          if ((ulong)puVar8[0xb] != 0) {
            local_20 = *(undefined8 *)((long)param_1 + (ulong)puVar8[0xb]);
          }
          uVar1 = puVar8[10];
joined_r0x00dd7290:
          if ((ulong)uVar1 != 0) {
            bVar2 = *(char *)((long)param_1 + (ulong)uVar1) != '\0';
            goto LAB_00dd72a8;
          }
        }
        bVar2 = false;
        goto LAB_00dd72a8;
      }
    }
  }
  uVar7 = 0;
  bVar2 = false;
  local_20 = 0;
LAB_00dd72a8:
  uVar4 = FUN_00dd6ef0(uVar3,uVar5,&local_18,uVar6,uVar7,&local_20,bVar2);
  return uVar4 & 1;
}


