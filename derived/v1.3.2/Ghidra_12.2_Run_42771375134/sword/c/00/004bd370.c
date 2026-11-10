/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bd370; name: FUN_004bd370
 */


void FUN_004bd370(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = nn::os::GetCurrentThread();
  *(undefined8 *)PTR_DAT_02713000 = uVar2;
  nn::os::WaitEvent((EventType *)(param_1 + 0x130));
  cVar1 = *(char *)(param_1 + 0x158);
  while (cVar1 == '\0') {
    FUN_004bd450(param_1);
    nn::os::WaitEvent((EventType *)(param_1 + 0x130));
    cVar1 = *(char *)(param_1 + 0x158);
  }
  return;
}


