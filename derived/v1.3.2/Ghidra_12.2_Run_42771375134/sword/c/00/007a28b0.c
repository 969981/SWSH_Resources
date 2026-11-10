/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a28b0; name: FUN_007a28b0
 */


void FUN_007a28b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long local_c8;
  long *local_c0 [2];
  long alStack_b0 [4];
  long *local_90;
  long *local_80;
  long local_78;
  long local_70;
  undefined1 auStack_60 [8];
  long local_58;
  
  if (*(long *)PTR_DAT_027104b0 != 0) {
    uVar6 = FUN_007b5710();
    FUN_007a2d60(local_c0,uVar6);
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar5 = PTR_DAT_02710860;
    if (local_78 != 0) {
      plVar2 = local_80 + local_78;
      plVar11 = local_80;
      do {
        while( true ) {
          local_c8 = *plVar11;
          plVar9 = *(long **)(param_1 + 0x100);
          lVar10 = *(long *)(param_1 + 0x108);
          plVar3 = plVar9 + lVar10;
          if ((lVar10 != 0) && (*plVar9 != local_c8)) {
            lVar10 = lVar10 * 8;
            plVar8 = plVar9;
            do {
              lVar10 = lVar10 + -8;
              if (lVar10 == 0) goto LAB_007a29b8;
              plVar9 = plVar8 + 1;
              plVar1 = plVar8 + 1;
              plVar8 = plVar9;
            } while (*plVar1 != local_c8);
          }
          if (plVar3 != plVar9) break;
LAB_007a29b8:
          plVar11 = plVar11 + 1;
          if (plVar11 == plVar2) goto LAB_007a2a08;
        }
        uVar4 = *(ulong *)(param_1 + 0x168);
        if (uVar4 < *(ulong *)(param_1 + 0x170)) {
          lVar12 = *(long *)(param_1 + 0x160);
          uVar6 = *(undefined8 *)(param_1 + 0x120);
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar6;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *(long *)(lVar12 + uVar4 * 8) = local_c8;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 1;
          goto LAB_007a29b8;
        }
        local_58 = *(long *)(param_1 + 0x160) + uVar4 * 8;
        FUN_007a31a0(auStack_60,param_1 + 0x120,&local_58,1,&local_c8);
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar2);
    }
LAB_007a2a08:
    if (local_70 != 0) {
      (**(code **)(*local_c0[0] + 0x18))(local_c0[0],local_80,local_70 << 3,8);
    }
    if (alStack_b0 == local_90) {
      pcVar7 = *(code **)(*local_90 + 0x20);
    }
    else {
      if (local_90 == (long *)0x0) {
        return;
      }
      pcVar7 = *(code **)(*local_90 + 0x28);
    }
    (*pcVar7)();
  }
  return;
}


