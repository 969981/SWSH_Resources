/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdb920; name: FUN_00bdb920
 */


void FUN_00bdb920(long *param_1,long param_2)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x1948);
  param_1[2] = *(long *)(param_2 + 0x1950);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x1958);
  param_1[4] = *(long *)(param_2 + 0x1960);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x1968);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x196c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x1970);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x1974);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x1978);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x197c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x1980);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x1984);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x1988);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x198c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x1990);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x1994);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x1998);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x199c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x19a0);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(param_2 + 0x19a4);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0x19a8);
  puVar1 = PTR_DAT_027169c0;
  *(undefined2 *)((long)param_1 + 0x6a) = *(undefined2 *)(param_2 + 0x19aa);
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


