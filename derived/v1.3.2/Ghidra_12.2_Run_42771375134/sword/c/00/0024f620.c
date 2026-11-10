/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024f620; name: FUN_0024f620
 */


long * FUN_0024f620(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)*param_1;
  *(undefined2 *)((long)plVar2 + 10) = 2;
  puVar1 = PTR_DAT_02711e78;
  *(undefined4 *)(plVar2 + 3) = 1;
  *(undefined4 *)(plVar2 + 0xf) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[2] = (long)(puVar1 + 0xe0);
  *param_1 = plVar2 + 0x11;
  uVar3 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
  *(ulong *)(param_2 + 8) =
       uVar3 + (ulong)(uint)(*(int *)((long)plVar2 + 0x3c) * (int)plVar2[7]) * 4;
  plVar2[10] = uVar3;
  return plVar2;
}


