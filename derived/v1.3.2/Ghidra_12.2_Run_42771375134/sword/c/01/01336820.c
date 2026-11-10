/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01336820; name: FUN_01336820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01336820(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined8 uVar14;
  undefined1 auVar13 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar4 = PTR_DAT_02715080;
  puVar3 = PTR_DAT_02715078;
  plVar1 = *(long **)(param_1 + 0xa0);
  plVar2 = *(long **)(param_1 + 0xa8);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    if ((char)plVar1[2] == '\0') {
      uVar9 = FUN_0130a600(plVar1[1]);
      if ((uVar9 & 1) == 0) {
        bVar5 = FUN_013092d0(plVar1[1]);
        bVar6 = FUN_0130a720(plVar1[1]);
        if ((bVar5 == 0xfd & bVar6) != 0) {
          bVar5 = 1;
        }
        if (bVar5 == 0xfd) goto LAB_0133699c;
        uVar14 = *(undefined8 *)((ulong)bVar5 * 0x10 + 0x2a6e978);
        uVar8 = *(undefined8 *)(&DAT_02a6e970 + (ulong)bVar5 * 0x10);
      }
      else {
        uVar8 = _DAT_02a6e970;
        uVar14 = uRam0000000002a6e978;
      }
      local_80 = CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)_DAT_02a6e940 >> 0x20),
                          (float)uVar8 + (float)_DAT_02a6e940);
      uStack_78 = CONCAT44((float)((ulong)uVar14 >> 0x20) +
                           (float)((ulong)uRam0000000002a6e948 >> 0x20),
                           (float)uVar14 + (float)uRam0000000002a6e948);
      FUN_012dc9c0(plVar1[1],&local_80);
      *(undefined1 *)(plVar1 + 2) = 1;
      if (*plVar1 == 0) {
LAB_01336970:
        puVar11 = (undefined8 *)0x0;
      }
      else {
        puVar11 = *(undefined8 **)(*plVar1 + 0x60);
        if (puVar11 != (undefined8 *)0x0) {
          plVar10 = (long *)(**(code **)*puVar11)(puVar11);
          if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
            uVar8 = FUN_00a87090();
            *(undefined8 *)puVar4 = uVar8;
            __cxa_guard_release(puVar3);
          }
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)puVar4) {
              puVar11 = puVar11 + -10;
              goto LAB_01336974;
            }
          }
          goto LAB_01336970;
        }
      }
LAB_01336974:
      fVar12 = atan2f((float)_DAT_02a6e960 - (float)puVar11[0x16],
                      (float)uRam0000000002a6e968 - (float)puVar11[0x17]);
      auVar13 = FUN_00a92cd0(fVar12,0,0);
      *(undefined1 *)(puVar11 + 0x18) = 1;
      *(undefined1 (*) [16])(puVar11 + 0x14) = auVar13;
    }
LAB_0133699c:
    plVar1 = plVar1 + 3;
  } while( true );
}


