/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00479850; name: FUN_00479850
 */


void FUN_00479850(long *param_1)

{
  int iVar1;
  long lVar2;
  
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    lVar2 = param_1[1];
    iVar1 = *(int *)(lVar2 + 0x7c) + 1;
    *(int *)(lVar2 + 0x7c) = iVar1;
    if (((*(int *)(lVar2 + 0x6c) != 3) && (*(int *)(lVar2 + 0x74) <= iVar1)) &&
       (*(long *)(lVar2 + 0x50) != 0)) {
      *(undefined4 *)(lVar2 + 0x70) = *(undefined4 *)(*(long *)(lVar2 + 0x50) + 0xc);
      *(undefined8 *)(lVar2 + 0x50) = 0;
    }
  }
  return;
}


