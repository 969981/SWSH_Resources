/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d752f0; name: FUN_00d752f0
 */


void FUN_00d752f0(long *param_1,ulong param_2)

{
  long *plVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  void *pvVar12;
  undefined1 local_300 [4];
  undefined8 local_2fc;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  char acStack_2c4 [260];
  undefined8 local_1c0;
  undefined1 local_1b4 [4];
  uint local_1b0 [2];
  undefined1 auStack_1a8 [328];
  
  local_1b4[0] = *(undefined1 *)(*(long *)(*param_1 + 0x278) + 0x58);
  local_1b0[0] = 0xb;
  uVar6 = FUN_00d705e0(local_1b0);
  uVar3 = **(undefined4 **)(*param_1 + 0x280);
  cVar4 = FUN_00d709f0(uVar3);
  if (cVar4 != '\0') {
    uVar6 = uVar6 & 0xff;
    plVar1 = param_1 + uVar6 * 6 + 2;
    if ((param_2 & 1) == 0) {
      uVar10 = 0;
      do {
        local_1c0 = FUN_00d71250(uVar10,uVar3);
        piVar7 = (int *)FUN_00d70a10(&local_1c0,local_1b4);
        uVar9 = FUN_00d714a0();
        if ((uVar9 & 1) != 0) {
          local_300[0] = 0;
          local_2fc = 0x3ff00000000;
          local_2f0 = 0;
          local_2c8 = 0;
          local_2d8 = 0;
          local_2d0 = 0;
          local_2e8 = 0;
          uStack_2e0 = 0;
          if (4 < *(ushort *)((long)piVar7 - (long)*piVar7)) {
            uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2];
            local_2f0 = 0;
            if (uVar9 != 0) {
              local_2f0 = *(undefined8 *)((long)piVar7 + uVar9);
            }
          }
          if (*(ushort *)((long)piVar7 - (long)*piVar7) < 0xd) {
            lVar8 = 0;
          }
          else {
            uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[6];
            lVar8 = 0;
            if (uVar9 != 0) {
              puVar2 = (uint *)((long)piVar7 + uVar9);
              lVar8 = (long)puVar2 + (ulong)*puVar2;
            }
          }
          strncpy(acStack_2c4,(char *)(lVar8 + 4),0xff);
          local_2d0 = CONCAT44(local_2d0._4_4_,18000);
          local_1b0[0] = local_1b0[0] & 0xffffff00;
          memcpy(auStack_1a8,local_300,0x140);
          pvVar12 = (void *)*plVar1;
          if (pvVar12 < (void *)param_1[uVar6 * 6 + 3]) {
            lVar11 = param_1[uVar6 * 6 + 4];
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00d75678;
            *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar11;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            memcpy(pvVar12,local_1b0,0x148);
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            *plVar1 = *plVar1 + 0x148;
          }
          else {
            FUN_00d75bb0(param_1 + uVar6 * 6 + 1,local_1b0);
          }
        }
        uVar10 = uVar10 + 1;
        uVar5 = FUN_00d709f0(uVar3);
      } while ((uVar10 & 0xff) < (uVar5 & 0xff));
    }
    else {
      uVar10 = 0;
      do {
        local_1c0 = FUN_00d71250(uVar10,uVar3);
        piVar7 = (int *)FUN_00d70a10(&local_1c0,local_1b4);
        local_300[0] = 0;
        local_2fc = 0x3ff00000000;
        local_2f0 = 0;
        local_2c8 = 0;
        local_2d8 = 0;
        local_2d0 = 0;
        local_2e8 = 0;
        uStack_2e0 = 0;
        if (4 < *(ushort *)((long)piVar7 - (long)*piVar7)) {
          uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2];
          local_2f0 = 0;
          if (uVar9 != 0) {
            local_2f0 = *(undefined8 *)((long)piVar7 + uVar9);
          }
        }
        if (*(ushort *)((long)piVar7 - (long)*piVar7) < 0xd) {
          lVar8 = 0;
        }
        else {
          uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[6];
          lVar8 = 0;
          if (uVar9 != 0) {
            puVar2 = (uint *)((long)piVar7 + uVar9);
            lVar8 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        strncpy(acStack_2c4,(char *)(lVar8 + 4),0xff);
        local_2d0 = CONCAT44(local_2d0._4_4_,18000);
        local_1b0[0] = local_1b0[0] & 0xffffff00;
        memcpy(auStack_1a8,local_300,0x140);
        pvVar12 = (void *)*plVar1;
        if (pvVar12 < (void *)param_1[uVar6 * 6 + 3]) {
          lVar11 = param_1[uVar6 * 6 + 4];
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00d75678:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar11;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          memcpy(pvVar12,local_1b0,0x148);
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          *plVar1 = *plVar1 + 0x148;
        }
        else {
          FUN_00d75bb0(param_1 + uVar6 * 6 + 1,local_1b0);
        }
        uVar10 = uVar10 + 1;
        uVar5 = FUN_00d709f0(uVar3);
      } while ((uVar10 & 0xff) < (uVar5 & 0xff));
    }
  }
  return;
}


