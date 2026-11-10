/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029b060; name: FUN_0029b060
 */


void FUN_0029b060(long *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((long)param_1 + 0x44);
  while (iVar1 != 0) {
    (**(code **)**(undefined8 **)param_1[3])();
    iVar1 = *(int *)((long)param_1 + 0x44);
  }
  while (*(int *)((long)param_1 + 0x7c) != 0) {
    (**(code **)**(undefined8 **)param_1[10])();
  }
  while (*(int *)((long)param_1 + 0xb4) != 0) {
    (**(code **)**(undefined8 **)param_1[0x11])();
  }
                    /* WARNING: Could not recover jumptable at 0x0029b0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


