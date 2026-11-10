/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b5710; name: FUN_007b5710
 */


long FUN_007b5710(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [8];
  long local_58;
  
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  puVar2 = PTR_DAT_02710860;
  lVar4 = *(long *)PTR_DAT_02716a30;
  lVar1 = param_1 + 0x160;
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x1a0);
    if (lVar6 != lVar4 + 0x198) {
      uVar7 = 0;
      puVar5 = (undefined8 *)(lVar6 + 0x10);
      if (*(long *)(param_1 + 0x1b0) != 0) goto LAB_007b5790;
      do {
        local_58 = *(long *)(param_1 + 0x1a0) + uVar7 * 8;
        FUN_007a31a0(auStack_68,lVar1,&local_58,1,puVar5);
        lVar6 = *(long *)(lVar6 + 8);
        while( true ) {
          if (lVar6 == lVar4 + 0x198) {
            return lVar1;
          }
          uVar7 = *(ulong *)(param_1 + 0x1a8);
          puVar5 = (undefined8 *)(lVar6 + 0x10);
          if (*(ulong *)(param_1 + 0x1b0) <= uVar7) break;
LAB_007b5790:
          lVar8 = *(long *)(param_1 + 0x1a0);
          uVar9 = *(undefined8 *)(param_1 + 0x160);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
          if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar9;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          *(undefined8 *)(lVar8 + uVar7 * 8) = *puVar5;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
          lVar6 = *(long *)(lVar6 + 8);
        }
      } while( true );
    }
  }
  return lVar1;
}


