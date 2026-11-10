/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f7ef0; name: FUN_004f7ef0
 */


long * FUN_004f7ef0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = FUN_00404590();
  puVar2 = PTR_DAT_027137c8;
  puVar1 = PTR_DAT_02712d98;
  if ((uVar3 & 1) == 0) {
    return (long *)0x0;
  }
  if (*(long **)PTR_DAT_02712d98 != (long *)0x0) {
    return *(long **)PTR_DAT_02712d98;
  }
  uVar3 = (ulong)*(uint *)PTR_DAT_027137c8;
  DAT_0275b358 = 0;
  if (*(uint *)PTR_DAT_027137c8 == 0xffffffff) {
    uVar3 = FUN_00405500(0,*param_1,0x20,1,0);
    *(int *)puVar2 = (int)uVar3;
    if ((int)uVar3 == -1) {
      return (long *)0x0;
    }
  }
  plVar4 = (long *)FUN_00404690(uVar3,0x18);
  if (plVar4 == (long *)0x0) {
    FUN_00405710(*(undefined4 *)puVar2);
    return *(long **)puVar1;
  }
  plVar4[2] = 0;
  *plVar4 = (long)(PTR_DAT_027137d0 + 0x10);
  plVar4[1] = 0;
  *(long **)puVar1 = plVar4;
  return plVar4;
}


