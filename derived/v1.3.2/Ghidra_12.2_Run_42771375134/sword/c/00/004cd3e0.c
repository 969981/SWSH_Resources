/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cd3e0; name: FUN_004cd3e0
 */


/* WARNING: Removing unreachable block (ram,0x004cd4bc) */

undefined8 FUN_004cd3e0(long param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined *puVar3;
  void *__s;
  
  *(uint *)(param_1 + 400) = param_2;
  *(undefined8 *)(param_1 + 0x170) = 0;
  uVar1 = *(undefined2 *)PTR_DAT_027133f0;
  iVar2 = (param_2 & 0xff) << 4;
  *(undefined2 *)(param_1 + 0x178) = uVar1;
  *(undefined1 *)(param_1 + 0x17e) = 1;
  *(undefined4 *)(param_1 + 0x17a) = 0x1010100;
  *(undefined2 *)(param_1 + 0x188) = uVar1;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x18e) = 1;
  *(undefined4 *)(param_1 + 0x18a) = 0x1010100;
  puVar3 = PTR_PTR_02713088;
  *(int *)(param_1 + 0xb8) = iVar2;
  __s = (void *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,iVar2);
  *(void **)(param_1 + 0xb0) = __s;
  if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,(ulong)*(uint *)(param_1 + 0xb8));
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return 2;
}


