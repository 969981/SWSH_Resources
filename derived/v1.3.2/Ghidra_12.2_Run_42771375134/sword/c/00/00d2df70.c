/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d2df70; name: FUN_00d2df70
 */


byte FUN_00d2df70(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  byte *pbVar11;
  uint uVar12;
  byte bVar13;
  long *plVar14;
  long *plVar15;
  undefined *local_160;
  long local_158;
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  long local_48;
  
  FUN_00d19f50(&local_160,param_1,*(undefined4 *)(param_1 + 0x348));
  lVar6 = FUN_00c754c0(local_160,&local_48);
  if (local_160 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
    local_160 = (undefined *)0x0;
  }
  if (lVar6 == 0) {
    return 0;
  }
  FUN_0069c1e0(&local_160,lVar6);
  if (local_158 != 0) {
    if (*(char *)(local_158 + 0x170) == '\0') {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_006bef30();
    }
    if (((0x10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
        (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[8], uVar9 != 0)) &&
       (puVar10 = (uint *)((long)piVar7 + uVar9), piVar7 = (int *)((long)puVar10 + (ulong)*puVar10),
       piVar7 != (int *)0x0)) {
      puVar1 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (4 - (long)*piVar7)));
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
      puVar10 = puVar1 + 1;
      uVar12 = *puVar1;
      if (uVar12 == 0) {
        bVar13 = 0;
      }
      else {
        puVar1 = puVar10 + uVar12;
        bVar13 = 0;
        do {
          piVar7 = (int *)((long)puVar10 + (ulong)*puVar10);
          if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
             (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 == 0)) {
            lVar6 = 0;
            bVar3 = DAT_00000004;
          }
          else {
            puVar2 = (uint *)((long)piVar7 + uVar9);
            lVar6 = (long)puVar2 + (ulong)*puVar2;
            bVar3 = *(byte *)(lVar6 + 4);
          }
          uVar9 = 0xcbf29ce484222645;
          if (bVar3 != 0) {
            uVar9 = 0xcbf29ce484222645;
            pbVar11 = (byte *)(lVar6 + 5);
            do {
              uVar9 = (uVar9 ^ bVar3) * 0x100000001b3;
              bVar3 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar3 != 0);
          }
          puVar10 = puVar10 + 1;
          bVar13 = bVar13 | uVar9 == 0x46140f6b4f704a5a;
        } while (uVar9 != 0x46140f6b4f704a5a && puVar10 != puVar1);
      }
      lVar6 = FUN_00d1a660(param_1,*(undefined4 *)(param_1 + 0x348));
      if (*(long *)(lVar6 + 0x108) == 0) {
LAB_00d2e240:
        lVar6 = 0;
        uVar12 = 0xffffffce;
      }
      else {
        uVar12 = 0xffffffce;
        plVar15 = *(long **)(lVar6 + 0x100);
        do {
          plVar14 = plVar15 + 1;
          uVar9 = FUN_00d2e340(*plVar15 + 0x50);
          if ((uVar9 & 1) != 0) {
            lVar6 = *plVar15;
            uVar9 = FUN_00d2e340(lVar6 + 0x50);
            if ((uVar9 & 1) == 0) goto LAB_00d2e240;
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
            uVar12 = *(int *)(lVar6 + 0x380) - 0x32;
            goto LAB_00d2e248;
          }
          plVar15 = plVar14;
        } while (plVar14 != (long *)(*(long *)(lVar6 + 0x100) + *(long *)(lVar6 + 0x108) * 8));
        lVar6 = 0;
      }
LAB_00d2e248:
      lVar8 = FUN_00d1a660(param_1,*(undefined4 *)(param_1 + 0x348));
      if (*(long *)(lVar8 + 0x108) != 0) {
        plVar15 = *(long **)(lVar8 + 0x100);
        do {
          plVar14 = plVar15 + 1;
          uVar9 = FUN_00d2e430(*plVar15 + 0x50);
          if ((uVar9 & 1) != 0) {
            lVar8 = *plVar15;
            uVar9 = FUN_00d2e430(lVar8 + 0x50);
            if ((uVar9 & 1) != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
              FUN_00d1a020(&local_48,*(undefined8 *)(lVar8 + 0x90));
              uVar12 = *(uint *)(local_48 + (long)*(int *)(lVar8 + 0x380) * 0x24 + 1000);
              if (local_48 != 0) {
                (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
                local_48 = 0;
              }
              bVar5 = (uVar12 & 0xfffffffe) != 0x32;
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
              goto joined_r0x00d2e30c;
            }
            break;
          }
          plVar15 = plVar14;
        } while (plVar14 != (long *)(*(long *)(lVar8 + 0x100) + *(long *)(lVar8 + 0x108) * 8));
      }
      bVar5 = 1 < uVar12;
joined_r0x00d2e30c:
      bVar13 = bVar13 & bVar5;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      goto LAB_00d2e100;
    }
  }
  bVar13 = 0;
LAB_00d2e100:
  local_160 = PTR_DAT_02715090 + 0x10;
  if (local_158 == 0) {
    local_158 = 0;
    pcVar4 = local_c8;
  }
  else {
    FUN_006e2100(local_158,&local_160);
    lVar6 = local_158;
    local_158 = 0;
    pcVar4 = local_c8;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      pcVar4 = local_c8;
    }
  }
  local_c8 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar4)(auStack_b0);
  }
  pcVar4 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar4)(auStack_130);
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  return bVar13;
}


