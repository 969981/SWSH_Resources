/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935950; name: FUN_00935950
 */


void FUN_00935950(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  lVar2 = -0x12c0;
  do {
    lVar1 = lVar2 + 0x30;
    *(undefined4 *)((long)param_1 + lVar2 + 0x12c8) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x12d4) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x12e0) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x12ec) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0);
  return;
}


