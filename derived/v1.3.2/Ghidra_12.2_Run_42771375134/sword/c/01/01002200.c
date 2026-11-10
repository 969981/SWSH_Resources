/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01002200; name: FUN_01002200
 */


void FUN_01002200(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_012b4da0(auStack_30,*(undefined8 *)(*(long *)(param_1 + 0x58) + 400),
               *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x180));
  FUN_012b4070(param_1 + 0x160,auStack_30);
  return;
}


