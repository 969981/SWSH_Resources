/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138c9f0; name: FUN_0138c9f0
 */


void FUN_0138c9f0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auStack_28 [8];
  
  lVar10 = param_1 + (long)*(char *)(param_1 + 0x94) * 0x18;
  uVar13 = *(undefined8 *)(lVar10 + 0xbe);
  uVar1 = *(ulong *)(lVar10 + 0xb0);
  uVar9 = *(undefined8 *)(lVar10 + 0xb8);
  *(ulong *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  *(undefined8 *)(param_1 + 0x8e) = uVar13;
  if (((uint)(uVar1 >> 0x20) & 0xff) == 3) {
    pcVar11 = *(code **)(param_1 + 0xe8);
    if (pcVar11 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      (*pcVar11)(param_1 + 0x100);
    }
    puVar12 = PTR_LAB_02728c88;
  }
  else {
    if ((uVar1 >> 0x20 & 0xff) != 0) goto LAB_0138cac4;
    pcVar11 = *(code **)(param_1 + 0xe8);
    if (pcVar11 == (code *)0x0) {
      puVar12 = PTR_FUN_02728c60;
    }
    else {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      (*pcVar11)(param_1 + 0x100);
      puVar12 = PTR_FUN_02728c60;
    }
  }
  *(long *)(param_1 + 0x100) = param_1;
  puVar3 = PTR_LAB_02728c70;
  puVar2 = PTR_LAB_02728c68;
  *(undefined **)(param_1 + 0x108) = puVar12;
  *(undefined8 *)(param_1 + 0x110) = 0;
  puVar4 = PTR_LAB_02728c80;
  puVar12 = PTR_LAB_02728c78;
  *(undefined **)(param_1 + 0xe0) = puVar2;
  *(undefined **)(param_1 + 0xe8) = puVar3;
  *(undefined **)(param_1 + 0xf0) = puVar12;
  *(undefined **)(param_1 + 0xf8) = puVar4;
LAB_0138cac4:
  if (*(char *)(param_1 + 0x94) == '\x02') {
    *(undefined1 *)(param_1 + 0x161) = 1;
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar14 == (undefined8 *)0x0)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)*puVar14)(puVar14);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02715078), iVar5 != 0)) {
      uVar9 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar9;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar7 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        if (puVar6 == (undefined8 *)PTR_DAT_02715080) {
          puVar7 = puVar14 + -10;
          goto LAB_0138cb34;
        }
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)0x0);
      puVar7 = (undefined8 *)0x0;
    }
  }
LAB_0138cb34:
  plVar8 = (long *)FUN_01378f50(puVar7,auStack_28);
  (**(code **)(*plVar8 + 0xe0))(plVar8,param_1 + 0x80);
  return;
}


