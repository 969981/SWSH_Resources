/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5f120; name: FUN_00e5f120
 */


void FUN_00e5f120(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if ((*(long *)(param_1 + 0xb20) != 0) && (*(char *)(param_1 + 0xbd0) == '\0')) {
    uVar4 = FUN_00dc79e0();
    if ((uVar4 & 1) == 0) {
      if (0.0 < *(float *)(param_1 + 0x4ec)) {
        uVar5 = *(undefined8 *)(param_1 + 0xb20);
        uVar7 = 1;
        goto LAB_00e5f170;
      }
    }
    else if (*(float *)(param_1 + 0x4ec) <= 0.0) {
      uVar5 = *(undefined8 *)(param_1 + 0xb20);
      uVar7 = 0;
LAB_00e5f170:
      FUN_00dc73b0(uVar5,uVar7);
    }
  }
  if ((*(long *)(param_1 + 0x360) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x360) + 0x80), lVar8 != 0)) {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    puVar10 = *(undefined8 **)(lVar8 + 0x60);
    if (puVar10 != (undefined8 *)0x0) {
      plVar6 = (long *)(**(code **)*puVar10)(puVar10);
      if (((*PTR_DAT_02715290 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_02715290), iVar3 != 0)) {
        uVar5 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715298 = uVar5;
        __cxa_guard_release(PTR_DAT_02715290);
      }
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)PTR_DAT_02715298) {
          puVar10 = puVar10 + -10;
          goto LAB_00e5f1e4;
        }
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_00e5f1e4:
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if (puVar10 != (undefined8 *)0x0) {
      if (*(char *)(puVar10 + 0xc) == '\0') {
        if (0.0 < *(float *)(param_1 + 0x524)) {
          *(undefined1 *)(puVar10 + 0xc) = 1;
        }
      }
      else if (*(float *)(param_1 + 0x524) <= 0.0) {
        *(undefined1 *)(puVar10 + 0xc) = 0;
      }
    }
  }
  puVar1 = PTR_DAT_0271fc30;
  iVar3 = *(int *)(*(long *)PTR_DAT_0271fc30 + 0x54);
  if ((*(char *)(param_1 + 0xbd9) == '\0') ||
     ((*(int *)(param_1 + 0xbd4) != iVar3 && (*(char *)(param_1 + 0xbda) == '\0')))) {
    if (*(char *)(param_1 + 0xbd8) != '\0') {
      uVar5 = 0;
      goto LAB_00e5f270;
    }
  }
  else if (*(char *)(param_1 + 0xbd8) != '\0') {
    uVar5 = 1;
LAB_00e5f270:
    FUN_00db6d40(param_1,uVar5);
  }
  FUN_00e5f360(param_1);
  if ((*(char *)(param_1 + 0x218) != '\0') || (0.0 < *(float *)(param_1 + 0x4ec))) {
    *(undefined1 *)(param_1 + 0xbdb) = 0;
  }
  else {
    *(bool *)(param_1 + 0xbdb) = *(float *)(param_1 + 0x524) <= 0.0;
    if (*(float *)(param_1 + 0x524) <= 0.0) {
      bVar2 = *(int *)(param_1 + 0xbd4) == iVar3;
      *(bool *)(param_1 + 0xbdc) = bVar2;
      if (!bVar2) {
        return;
      }
      goto LAB_00e5f29c;
    }
  }
  *(undefined1 *)(param_1 + 0xbdc) = 1;
LAB_00e5f29c:
  FUN_00f51970(*(undefined8 *)puVar1,param_1);
  return;
}


