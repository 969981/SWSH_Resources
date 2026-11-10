/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df13c0; name: FUN_00df13c0
 */


undefined8 FUN_00df13c0(long param_1,ulong *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  code *pcVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
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
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x70) + 0x418);
  if (((plVar7 != *(long **)(*(long *)(param_1 + 0x70) + 0x420)) && (lVar8 = *plVar7, lVar8 != 0))
     && (puVar17 = *(undefined8 **)(lVar8 + 0x60), puVar17 != (undefined8 *)0x0)) {
    plVar7 = (long *)(**(code **)*puVar17)(puVar17);
    lVar8 = FUN_00c781c0();
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)lVar8) {
        FUN_0069c1e0(&local_140,puVar17 + -10);
        if (local_138 != 0) goto LAB_00df143c;
        piVar6 = (int *)0x0;
        goto LAB_00df1450;
      }
    }
  }
  FUN_0069c1e0(&local_140,0);
  piVar6 = (int *)0x0;
  if (local_138 != 0) {
LAB_00df143c:
    if (*(char *)(local_138 + 0x170) == '\0') {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_006bef30();
    }
  }
LAB_00df1450:
  if ((0x10 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
     (uVar11 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[8], uVar11 != 0)) {
    uVar12 = (ulong)*(uint *)((long)piVar6 + uVar11);
    piVar1 = (int *)((long)((long)piVar6 + uVar11) + uVar12);
    if (piVar1 != (int *)0x0) {
      uVar13 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      puVar2 = (uint *)((long)piVar1 + uVar13);
      uVar14 = (ulong)*puVar2;
      puVar2 = (uint *)((long)puVar2 + uVar14);
      puVar9 = puVar2 + 1;
      uVar10 = (ulong)*puVar2;
      if (uVar10 != 0) {
        puVar2 = puVar9 + uVar10;
        lVar8 = (long)piVar6 + uVar14 + uVar13 + uVar12 + uVar11 + 9;
        do {
          piVar6 = (int *)((long)puVar9 + (ulong)*puVar9);
          uVar12 = (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6));
          uVar11 = 0xcbf29ce484222645;
          puVar3 = (uint *)((long)piVar6 + uVar12);
          uVar10 = (ulong)*puVar3;
          bVar4 = *(byte *)((long)puVar3 + uVar10 + 4);
          if (bVar4 != 0) {
            uVar11 = 0xcbf29ce484222645;
            pbVar15 = (byte *)(lVar8 + uVar10 + uVar12 + (ulong)*puVar9);
            do {
              uVar11 = (uVar11 ^ bVar4) * 0x100000001b3;
              bVar4 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar4 != 0);
          }
          if (uVar11 == *param_2) {
            uVar16 = 1;
            goto LAB_00df1540;
          }
          puVar9 = puVar9 + 1;
          lVar8 = lVar8 + 4;
        } while (puVar9 != puVar2);
      }
    }
  }
  uVar16 = 0;
LAB_00df1540:
  local_140 = PTR_DAT_02715090 + 0x10;
  if (local_138 == 0) {
    local_138 = 0;
    pcVar5 = local_a8;
  }
  else {
    FUN_006e2100(local_138,&local_140);
    lVar8 = local_138;
    local_138 = 0;
    pcVar5 = local_a8;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      pcVar5 = local_a8;
    }
  }
  local_a8 = pcVar5;
  if (pcVar5 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar5)(auStack_90);
  }
  pcVar5 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar5)(auStack_110);
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
  }
  return uVar16;
}


