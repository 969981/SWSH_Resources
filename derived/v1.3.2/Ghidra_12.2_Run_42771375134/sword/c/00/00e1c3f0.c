/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e1c3f0; name: FUN_00e1c3f0
 */


void FUN_00e1c3f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long local_a8;
  long local_a0;
  long local_98;
  long *plStack_90;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long local_38;
  
  puVar3 = PTR_DAT_02710860;
  puVar10 = *(undefined8 **)(param_1 + 0x368);
  puVar11 = *(undefined8 **)(param_1 + 0x370);
  if (puVar10 != puVar11) {
    local_58 = *(long **)(*(long *)PTR_DAT_0271e860 + 0xa8);
    local_68 = (undefined8 *)0x0;
    local_60 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_48 = 0;
LAB_00e1c440:
    do {
      uVar7 = (**(code **)(*(long *)puVar10[0xc] + 0x78))();
      if (((uVar7 & 1) != 0) ||
         (uVar7 = (**(code **)(*(long *)puVar10[0xc] + 0x70))(), (uVar7 & 1) == 0)) {
        plVar5 = local_58;
        puVar4 = local_68;
        if (local_68 == local_60) {
          FUN_00e2f590(&local_70,puVar10);
          puVar10 = puVar10 + 0xd;
          if (puVar11 == puVar10) break;
          goto LAB_00e1c440;
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar5;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        uVar9 = puVar10[1];
        *puVar4 = *puVar10;
        puVar4[1] = uVar9;
        uVar9 = puVar10[2];
        uVar1 = puVar10[3];
        uVar2 = puVar10[5];
        puVar4[4] = puVar10[4];
        puVar4[5] = uVar2;
        puVar4[2] = uVar9;
        puVar4[3] = uVar1;
        *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar10 + 6);
        *(undefined2 *)((long)puVar4 + 0x34) = *(undefined2 *)((long)puVar10 + 0x34);
        *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(puVar10 + 7);
        *(undefined1 *)((long)puVar4 + 0x3c) = *(undefined1 *)((long)puVar10 + 0x3c);
        *(undefined1 *)((long)puVar4 + 0x3d) = *(undefined1 *)((long)puVar10 + 0x3d);
        *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar10 + 8);
        *(undefined4 *)((long)puVar4 + 0x44) = *(undefined4 *)((long)puVar10 + 0x44);
        *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(puVar10 + 9);
        uVar9 = puVar10[10];
        *(undefined1 *)(puVar4 + 0xb) = *(undefined1 *)(puVar10 + 0xb);
        puVar4[10] = uVar9;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        local_68 = local_68 + 0xc;
      }
      puVar10 = puVar10 + 0xd;
    } while (puVar11 != puVar10);
    if (local_70 != local_68) {
      lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      FUN_00c58c20(&local_78,lVar8);
      if (local_78 == 0) {
        local_38 = 0;
      }
      else {
        FUN_00c62ba0(&local_38);
      }
      lVar6 = local_38;
      FUN_00cb4f10(&local_a8,&local_70);
      FUN_00caa620(lVar6,&local_a8);
      if (local_a8 != 0) {
        local_a0 = local_a8;
        (**(code **)(*plStack_90 + 0x18))(plStack_90,local_a8,local_98 - local_a8,8);
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      local_68 = local_70;
    }
    if (local_68 != (undefined8 *)0x0) {
      (**(code **)(*local_58 + 0x18))(local_58,local_68,(long)local_60 - (long)local_68,8);
    }
  }
  return;
}


