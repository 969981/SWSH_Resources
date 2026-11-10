/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fcca0; name: FUN_011fcca0
 */


void FUN_011fcca0(long param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  ushort uStack_ce;
  char acStack_c4 [4];
  char acStack_c0 [4];
  char acStack_bc [8];
  char local_b4 [20];
  undefined1 local_a0;
  undefined1 local_8c;
  undefined1 local_78;
  undefined1 local_64;
  undefined1 local_50;
  uint7 uStack_4f;
  undefined2 local_48;
  
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_0120c5a0();
  }
  lVar5 = 0;
  cVar7 = '\0';
  local_b4[0] = '\0';
  local_a0 = 0;
  local_8c = 0;
  local_78 = 0;
  local_64 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(ulong *)(param_1 + 0x90) = (ulong)uStack_ce << 0x10;
  lVar4 = param_1;
  if (*(char *)(param_1 + 0x98) != '\0') goto LAB_011fcd3c;
LAB_011fcd74:
  lVar6 = lVar5;
  if (cVar7 == '\0') goto joined_r0x011fcdc4;
  *(undefined4 *)(lVar4 + 0x9c) = *(undefined4 *)(acStack_c0 + lVar5 + -4);
  *(undefined1 *)(lVar4 + 0xa0) = 0;
  if (acStack_c0[lVar5] != '\0') {
    *(undefined8 *)(lVar4 + 0xa4) = *(undefined8 *)(acStack_c0 + lVar5 + 4);
    *(undefined1 *)(lVar4 + 0xa0) = 1;
  }
  *(undefined1 *)(lVar4 + 0x98) = 1;
joined_r0x011fcda8:
  if (lVar6 != 100) {
    do {
      lVar5 = lVar6 + 0x14;
      cVar7 = local_b4[lVar6];
      lVar4 = param_1 + lVar5;
      if (*(char *)(lVar4 + 0x98) == '\0') goto LAB_011fcd74;
LAB_011fcd3c:
      lVar6 = lVar5;
      if (cVar7 == '\0') {
        if (*(char *)(lVar4 + 0xa0) != '\0') {
          *(undefined1 *)(lVar4 + 0xa0) = 0;
        }
        *(undefined1 *)(lVar4 + 0x98) = 0;
      }
      else {
        *(undefined4 *)(lVar4 + 0x9c) = *(undefined4 *)(acStack_c0 + lVar5 + -4);
        if (*(char *)(lVar4 + 0xa0) == '\0') {
          if (acStack_c0[lVar5] != '\0') {
            *(undefined8 *)(lVar4 + 0xa4) = *(undefined8 *)(acStack_c0 + lVar5 + 4);
            *(undefined1 *)(lVar4 + 0xa0) = 1;
          }
        }
        else {
          if (acStack_c0[lVar5] == '\0') goto LAB_011fcde8;
          *(undefined8 *)(lVar4 + 0xa4) = *(undefined8 *)(acStack_c0 + lVar5 + 4);
        }
      }
joined_r0x011fcdc4:
      if (lVar6 == 100) break;
    } while( true );
  }
  *(undefined2 *)(param_1 + 0x118) = 0;
  lVar5 = *(long *)(param_1 + 0x138);
  *(ulong *)(param_1 + 0x110) = (ulong)uStack_4f << 8;
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    goto LAB_011fceac;
  }
  if (*(int *)(lVar5 + 0x54) == 0) goto LAB_011fce94;
  piVar1 = (int *)(lVar5 + 0x54);
  iVar8 = *(int *)(lVar5 + 0x54);
  goto LAB_011fce18;
LAB_011fcde8:
  *(undefined1 *)(lVar4 + 0xa0) = 0;
  goto joined_r0x011fcda8;
LAB_011fce18:
  plVar9 = *(long **)(lVar5 + 0x58);
  lVar4 = FUN_01201190();
  while( true ) {
    if (plVar9 == (long *)0x0) goto LAB_011fce94;
    if (plVar9 == (long *)lVar4) break;
    plVar9 = (long *)*plVar9;
  }
  iVar2 = *piVar1;
  if (iVar2 == iVar8) {
    cVar7 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar8 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') {
      lVar5 = *(long *)(lVar5 + 0x60);
      if (lVar5 != 0) {
        FUN_007dca70(lVar5 + -0x50);
        (**(code **)(*(long *)(lVar5 + -8) + 0x18))((long *)(lVar5 + -8));
      }
      goto LAB_011fce94;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar8 = iVar2;
  if (iVar2 == 0) {
LAB_011fce94:
    lVar5 = *(long *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
LAB_011fceac:
    FUN_012242d0(param_1 + 0x370);
    FUN_011fdea0(param_1);
    nn::oe::SetUserInactivityDetectionTimeExtended(false);
    nn::oe::SetFocusHandlingMode(0);
    return;
  }
  goto LAB_011fce18;
}


