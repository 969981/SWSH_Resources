/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155eab0; name: FUN_0155eab0
 */


void FUN_0155eab0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long local_60 [3];
  undefined4 local_44;
  
  bVar7 = FUN_01532a50();
  if (bVar7 < 2) {
    uVar9 = *(undefined8 *)PTR_DAT_02715420;
    uVar4 = *(undefined8 *)(PTR_DAT_02715420 + 8);
    uVar3 = *(undefined8 *)PTR_DAT_027152c0;
    uVar5 = *(undefined8 *)(PTR_DAT_027152c0 + 8);
    lVar11 = 0;
    do {
      lVar13 = param_1 + lVar11;
      lVar11 = lVar11 + 0xc0;
      *(undefined8 *)(lVar13 + 0x6070) = 0xcbf29ce484222645;
      *(undefined8 *)(lVar13 + 0x6088) = 0;
      *(undefined8 *)(lVar13 + 0x6080) = 0;
      *(undefined8 *)(lVar13 + 0x6098) = uVar4;
      *(undefined8 *)(lVar13 + 0x6090) = uVar9;
      *(undefined8 *)(lVar13 + 0x60a8) = uVar5;
      *(undefined8 *)(lVar13 + 0x60a0) = uVar3;
      *(undefined8 *)(lVar13 + 0x6128) = 0;
      *(undefined8 *)(lVar13 + 0x6118) = 0;
      *(undefined8 *)(lVar13 + 0x6108) = 0;
      *(undefined8 *)(lVar13 + 0x60f8) = 0;
      *(undefined8 *)(lVar13 + 0x60e8) = 0;
      *(undefined8 *)(lVar13 + 0x60d8) = 0;
      *(undefined8 *)(lVar13 + 0x60c8) = 0;
      *(undefined8 *)(lVar13 + 0x6120) = 0;
      *(undefined8 *)(lVar13 + 0x6110) = 0;
      *(undefined8 *)(lVar13 + 0x6100) = 0;
      *(undefined8 *)(lVar13 + 0x60f0) = 0;
      *(undefined8 *)(lVar13 + 0x60e0) = 0;
      *(undefined8 *)(lVar13 + 0x60d0) = 0;
      *(undefined8 *)(lVar13 + 0x60c0) = 0;
      *(undefined8 *)(lVar13 + 0x60b8) = 0;
      *(undefined8 *)(lVar13 + 0x60b0) = 0;
    } while (lVar11 != 0x6000);
    local_44 = 0;
    uVar9 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_44);
    local_60[2] = param_1 + 0x6070;
    local_60[1] = 0x6000;
    FUN_0155e970(uVar9,PTR_DAT_0272ae98,local_60 + 2,local_60 + 1);
  }
  puVar6 = PTR_DAT_02710798;
  local_44 = 0;
  lVar11 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_44);
  local_60[2] = param_1 + 0x60;
  local_60[1] = 0x6010;
  cVar8 = FUN_015602e0(lVar11,PTR_DAT_0272ae90,local_60 + 2,local_60 + 1);
  if ((cVar8 == '\0') && (plVar10 = *(long **)(lVar11 + 0x58), plVar10 != (long *)0x0)) {
    (**(code **)(*plVar10 + 0x50))(plVar10,PTR_DAT_0272ae90);
  }
  local_44 = 0;
  lVar11 = FUN_0153bf80(*(undefined8 *)puVar6,&local_44);
  local_60[2] = param_1 + 0x6070;
  local_60[1] = 0x6000;
  cVar8 = FUN_01560500(lVar11,PTR_DAT_0272ae98,local_60 + 2,local_60 + 1);
  if ((cVar8 == '\0') && (plVar10 = *(long **)(lVar11 + 0x58), plVar10 != (long *)0x0)) {
    (**(code **)(*plVar10 + 0x50))(plVar10,PTR_DAT_0272ae98);
  }
  lVar13 = *(long *)PTR_DAT_0271efa0;
  lVar11 = *(long *)(lVar13 + 0xd8);
  if (lVar11 != 0) {
    puVar14 = *(undefined8 **)(lVar13 + 0xd0);
    puVar16 = puVar14 + lVar11;
    puVar1 = puVar14 + 1;
    puVar12 = puVar14;
    do {
      puVar17 = puVar1;
      if (puVar1 != puVar16) {
        puVar12 = puVar1;
        do {
          if (puVar12[-1] != 0) {
            (**(code **)(*(long *)(puVar12[-1] + 0x48) + 0x18))();
            puVar12[-1] = 0;
          }
          puVar12[-1] = *puVar12;
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        } while (puVar16 != puVar12);
        puVar12 = *(undefined8 **)(lVar13 + 0xd0);
        lVar11 = *(long *)(lVar13 + 0xd8);
        puVar17 = puVar12 + lVar11;
      }
      if (puVar17[-1] != 0) {
        (**(code **)(*(long *)(puVar17[-1] + 0x48) + 0x18))();
        puVar17[-1] = 0;
        puVar12 = *(undefined8 **)(lVar13 + 0xd0);
        lVar11 = *(long *)(lVar13 + 0xd8);
      }
      lVar11 = lVar11 + -1;
      puVar16 = puVar12 + lVar11;
      *(long *)(lVar13 + 0xd8) = lVar11;
    } while (puVar14 != puVar16);
  }
  uVar15 = 0;
  lVar11 = param_1 + 0x60;
  do {
    lVar2 = lVar11;
    if (0x7f < uVar15) {
      lVar2 = param_1 + (ulong)((int)uVar15 - 0x80) * 0xc0 + 0x6070;
    }
    FUN_0155ed80(local_60,lVar13,lVar2);
    if (local_60[0] != 0) {
      (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
      local_60[0] = 0;
    }
    uVar15 = uVar15 + 1;
    lVar11 = lVar11 + 0xc0;
  } while (uVar15 != 0x100);
  return;
}


