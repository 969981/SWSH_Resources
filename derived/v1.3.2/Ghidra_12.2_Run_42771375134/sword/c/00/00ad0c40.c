/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad0c40; name: FUN_00ad0c40
 */


undefined8 FUN_00ad0c40(void)

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
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 uVar15;
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
  if (local_28 == 0) {
    uVar15 = 0;
  }
  else {
    FUN_0069c1e0(&local_140,local_28);
    piVar7 = (int *)0x0;
    if (local_138 != 0) {
      if (*(char *)(local_138 + 0x170) == '\0') {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)FUN_006bef30();
      }
    }
    if ((0x10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
       (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[8], uVar9 != 0)) {
      uVar11 = (ulong)*(uint *)((long)piVar7 + uVar9);
      piVar1 = (int *)((long)((long)piVar7 + uVar9) + uVar11);
      if (piVar1 != (int *)0x0) {
        uVar12 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
        puVar2 = (uint *)((long)piVar1 + uVar12);
        uVar13 = (ulong)*puVar2;
        puVar2 = (uint *)((long)puVar2 + uVar13);
        puVar8 = puVar2 + 1;
        uVar4 = *puVar2;
        if (uVar4 != 0) {
          puVar2 = puVar8 + uVar4;
          lVar10 = (long)piVar7 + uVar13 + uVar12 + uVar11 + uVar9 + 9;
          do {
            piVar7 = (int *)((long)puVar8 + (ulong)*puVar8);
            uVar9 = (ulong)*(ushort *)((long)piVar7 + (4 - (long)*piVar7));
            puVar3 = (uint *)((long)piVar7 + uVar9);
            uVar11 = (ulong)*puVar3;
            bVar5 = *(byte *)((long)puVar3 + uVar11 + 4);
            if (bVar5 != 0) {
              uVar12 = 0xcbf29ce484222645;
              pbVar14 = (byte *)(lVar10 + uVar11 + uVar9 + (ulong)*puVar8);
              do {
                uVar12 = (uVar12 ^ bVar5) * 0x100000001b3;
                bVar5 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while (bVar5 != 0);
              if (uVar12 == 0x5a5a3e452eb74895) {
                uVar15 = 1;
                goto LAB_00ad0d88;
              }
            }
            puVar8 = puVar8 + 1;
            lVar10 = lVar10 + 4;
          } while (puVar8 != puVar2);
        }
      }
    }
    uVar15 = 0;
LAB_00ad0d88:
    local_140 = PTR_DAT_02715090 + 0x10;
    if (local_138 == 0) {
      local_138 = 0;
      pcVar6 = local_a8;
    }
    else {
      FUN_006e2100(local_138,&local_140);
      lVar10 = local_138;
      local_138 = 0;
      pcVar6 = local_a8;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
        pcVar6 = local_a8;
      }
    }
    local_a8 = pcVar6;
    if (pcVar6 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar6)(auStack_90);
    }
    pcVar6 = local_128;
    if (local_128 != (code *)0x0) {
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      local_128 = (code *)0x0;
      (*pcVar6)(auStack_110);
    }
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      local_138 = 0;
    }
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
  }
  return uVar15;
}


