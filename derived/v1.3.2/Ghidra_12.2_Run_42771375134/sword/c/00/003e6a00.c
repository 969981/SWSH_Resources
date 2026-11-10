/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e6a00; name: FUN_003e6a00
 */


void FUN_003e6a00(long param_1)

{
  undefined1 auStack_4b8 [64];
  undefined1 auStack_478 [1024];
  undefined1 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  
  local_68 = 0x2000000000;
  local_78 = 1;
  local_70 = auStack_478;
  if (0x20 < *(uint *)(param_1 + 0x960)) {
                    /* try { // try from 003e6a48 to 003e6a53 has its CatchHandler @ 003e6e84 */
    FUN_003f6880(auStack_478,*(uint *)(param_1 + 0x960));
  }
                    /* try { // try from 003e6a54 to 003e6a63 has its CatchHandler @ 003e6e94 */
                    /* WARNING: Subroutine does not return */
  memset(auStack_4b8,0,0x10);
}


