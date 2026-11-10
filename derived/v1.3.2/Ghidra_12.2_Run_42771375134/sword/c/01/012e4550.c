/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e4550; name: FUN_012e4550
 */


void FUN_012e4550(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_60 [16];
  
  puVar2 = PTR_DAT_02727ac0;
  puVar1 = PTR_DAT_02727ab8;
  pcVar10 = (char *)(param_1 + 0x510);
  do {
    if ((*pcVar10 == '\0') && (*(long *)(pcVar10 + 8) != 0)) {
      lVar4 = FUN_0130f990(param_1);
      lVar11 = 0;
      do {
        lVar9 = *(long *)(lVar4 + lVar11);
        if (lVar9 != 0) {
          auVar12 = FUN_0130fa00(param_1);
          local_60 = auVar12;
          uVar5 = FUN_01311b90(lVar9,local_60);
          if ((uVar5 & 1) != 0) {
            plVar8 = *(long **)(lVar4 + lVar11);
            plVar6 = (long *)(**(code **)plVar8[10])(plVar8 + 10);
            if ((*puVar1 & 1) == 0) {
              iVar3 = __cxa_guard_acquire(puVar1);
              if (iVar3 != 0) {
                uVar7 = FUN_012ec770();
                *(undefined8 *)puVar2 = uVar7;
                __cxa_guard_release(puVar1);
              }
            }
            goto joined_r0x012e4680;
          }
        }
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0x100);
LAB_012e45d4:
      lVar11 = *(long *)(pcVar10 + 8);
      pcVar10[8] = '\0';
      pcVar10[9] = '\0';
      pcVar10[10] = '\0';
      pcVar10[0xb] = '\0';
      pcVar10[0xc] = '\0';
      pcVar10[0xd] = '\0';
      pcVar10[0xe] = '\0';
      pcVar10[0xf] = '\0';
joined_r0x012e464c:
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
      }
    }
    pcVar10 = pcVar10 + 0x10;
    if (pcVar10 == (char *)(param_1 + 0x710)) {
      return;
    }
  } while( true );
joined_r0x012e4680:
  if (plVar6 == (long *)0x0) goto LAB_012e45d4;
  if (plVar6 == (long *)puVar2) {
    (**(code **)(*plVar8 + 0x68))(plVar8,*(undefined8 *)(pcVar10 + 8));
    lVar11 = *(long *)(pcVar10 + 8);
    pcVar10[8] = '\0';
    pcVar10[9] = '\0';
    pcVar10[10] = '\0';
    pcVar10[0xb] = '\0';
    pcVar10[0xc] = '\0';
    pcVar10[0xd] = '\0';
    pcVar10[0xe] = '\0';
    pcVar10[0xf] = '\0';
    goto joined_r0x012e464c;
  }
  plVar6 = (long *)*plVar6;
  goto joined_r0x012e4680;
}


