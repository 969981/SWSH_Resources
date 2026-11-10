/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad1bd0; name: FUN_00ad1bd0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00ad1bd0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  int *piVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined *local_140;
  long local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  long local_28;
  
  FUN_00ad1e50(&local_28);
  lVar12 = local_28;
  FUN_0069c1e0(&local_140,local_28);
  if (lVar12 != 0) {
    plVar16 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar16 + 0x18))(plVar16);
    local_28 = 0;
  }
  piVar8 = (int *)0x0;
  if (local_138 != 0) {
    if (*(char *)(local_138 + 0x170) == '\0') {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)FUN_006bef30();
    }
  }
  if ((0x10 < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
     (uVar11 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[8], uVar11 != 0)) {
    uVar13 = (ulong)*(uint *)((long)piVar8 + uVar11);
    piVar1 = (int *)((long)((long)piVar8 + uVar11) + uVar13);
    if (piVar1 != (int *)0x0) {
      uVar10 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      puVar2 = (uint *)((long)piVar1 + uVar10);
      uVar14 = (ulong)*puVar2;
      puVar2 = (uint *)((long)puVar2 + uVar14);
      puVar9 = puVar2 + 1;
      uVar5 = *puVar2;
      if (uVar5 != 0) {
        puVar2 = puVar9 + uVar5;
        lVar12 = (long)piVar8 + uVar14 + uVar10 + uVar13 + uVar11 + 9;
        do {
          piVar8 = (int *)((long)puVar9 + (ulong)*puVar9);
          uVar11 = (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8));
          puVar3 = (uint *)((long)piVar8 + uVar11);
          uVar13 = (ulong)*puVar3;
          bVar6 = *(byte *)((long)puVar3 + uVar13 + 4);
          if (bVar6 != 0) {
            uVar10 = 0xcbf29ce484222645;
            pbVar15 = (byte *)(lVar12 + uVar13 + uVar11 + (ulong)*puVar9);
            do {
              uVar10 = (uVar10 ^ bVar6) * 0x100000001b3;
              bVar6 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar6 != 0);
            if (uVar10 == 0x651f9584568d63f) {
              uVar17 = 1;
              iVar4 = *(int *)(param_1 + 0x4f0);
              goto joined_r0x00ad1e28;
            }
            if (uVar10 == 0x46140f6b4f704a5a) {
              uVar17 = 2;
              iVar4 = *(int *)(param_1 + 0x4f0);
              goto joined_r0x00ad1e28;
            }
          }
          puVar9 = puVar9 + 1;
          lVar12 = lVar12 + 4;
        } while (puVar9 != puVar2);
      }
      uVar17 = 0;
      iVar4 = *(int *)(param_1 + 0x4f0);
joined_r0x00ad1e28:
      if ((iVar4 - 0x301U < 2) || (iVar4 - 0x32U < 2)) {
        uVar17 = 3;
      }
      goto LAB_00ad1d68;
    }
  }
  uVar17 = 1;
LAB_00ad1d68:
  local_140 = PTR_DAT_02715090 + 0x10;
  if (local_138 == 0) {
    local_138 = 0;
    pcVar7 = local_a8;
  }
  else {
    FUN_006e2100(local_138,&local_140);
    lVar12 = local_138;
    local_138 = 0;
    pcVar7 = local_a8;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
      pcVar7 = local_a8;
    }
  }
  local_a8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar7)(auStack_90);
  }
  pcVar7 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar7)(auStack_110);
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
  }
  return uVar17;
}


