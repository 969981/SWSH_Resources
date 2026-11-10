/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad6a20; name: FUN_00ad6a20
 */


undefined8 FUN_00ad6a20(void)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  code *pcVar6;
  int *piVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  long *plVar15;
  undefined8 uVar16;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [96];
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  FUN_00ad1e50(&local_138);
  lVar11 = local_138;
  FUN_0069c1e0(&local_130,local_138);
  if (lVar11 != 0) {
    plVar15 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    local_138 = 0;
  }
  piVar7 = (int *)0x0;
  if (local_128 != 0) {
    if (*(char *)(local_128 + 0x170) == '\0') {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_006bef30();
    }
  }
  if ((0x10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
     (uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[8], uVar10 != 0)) {
    uVar12 = (ulong)*(uint *)((long)piVar7 + uVar10);
    piVar1 = (int *)((long)((long)piVar7 + uVar10) + uVar12);
    if (piVar1 != (int *)0x0) {
      uVar9 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      puVar2 = (uint *)((long)piVar1 + uVar9);
      uVar13 = (ulong)*puVar2;
      puVar2 = (uint *)((long)puVar2 + uVar13);
      puVar8 = puVar2 + 1;
      uVar4 = *puVar2;
      if (uVar4 != 0) {
        puVar2 = puVar8 + uVar4;
        uVar16 = 0;
        lVar11 = (long)piVar7 + uVar13 + uVar9 + uVar12 + uVar10 + 9;
        do {
          while( true ) {
            piVar7 = (int *)((long)puVar8 + (ulong)*puVar8);
            uVar10 = (ulong)*(ushort *)((long)piVar7 + (4 - (long)*piVar7));
            puVar3 = (uint *)((long)piVar7 + uVar10);
            uVar12 = (ulong)*puVar3;
            bVar5 = *(byte *)((long)puVar3 + uVar12 + 4);
            if (bVar5 != 0) break;
LAB_00ad6b78:
            puVar8 = puVar8 + 1;
            lVar11 = lVar11 + 4;
            if (puVar8 == puVar2) goto LAB_00ad6ba8;
          }
          uVar9 = 0xcbf29ce484222645;
          pbVar14 = (byte *)(lVar11 + uVar12 + uVar10 + (ulong)*puVar8);
          do {
            uVar9 = (uVar9 ^ bVar5) * 0x100000001b3;
            bVar5 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (bVar5 != 0);
          if (uVar9 != 0xae8a1c398a6cdded) {
            if (uVar9 != 0xa573df39852876bc) goto LAB_00ad6b78;
            uVar16 = 2;
            break;
          }
          uVar16 = 1;
          puVar8 = puVar8 + 1;
          lVar11 = lVar11 + 4;
        } while (puVar8 != puVar2);
        goto LAB_00ad6ba8;
      }
    }
  }
  uVar16 = 0;
LAB_00ad6ba8:
  local_130 = PTR_DAT_02715090 + 0x10;
  if (local_128 == 0) {
    local_128 = 0;
    pcVar6 = local_98;
  }
  else {
    FUN_006e2100(local_128,&local_130);
    lVar11 = local_128;
    local_128 = 0;
    pcVar6 = local_98;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
      pcVar6 = local_98;
    }
  }
  local_98 = pcVar6;
  if (pcVar6 != (code *)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    (*pcVar6)(auStack_80);
  }
  pcVar6 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    local_118 = (code *)0x0;
    (*pcVar6)(auStack_100);
  }
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
  }
  return uVar16;
}


