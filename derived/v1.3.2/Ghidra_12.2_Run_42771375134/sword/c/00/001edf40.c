/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001edf40; name: FUN_001edf40
 */


long * FUN_001edf40(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *(undefined2 *)((long)plVar2 + 10) = 2;
  *plVar2 = (long)(PTR_DAT_02711148 + 0x10);
                    /* try { // try from 001edf78 to 001edf83 has its CatchHandler @ 001ee014 */
  FUN_00206e40(plVar2 + 5,0);
  *(undefined4 *)(plVar2 + 10) = 0xffffffff;
  *(uint *)(plVar2 + 0xd) = *(uint *)(plVar2 + 0xd) & 0xf000000;
  plVar2[0xc] = 0;
  plVar2[0xe] = 0;
  plVar2[0x10] = 0;
  *(undefined1 *)((long)plVar2 + 0x8e) = 0;
  *(undefined2 *)((long)plVar2 + 0x12e) = 0;
  *(undefined4 *)(plVar2 + 0x2f) = 1;
  puVar1 = PTR_DAT_02711158;
  plVar2[0x26] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *param_1 = *param_1 + 0x180;
  FUN_00206f30(plVar2 + 5,param_2);
  FUN_001e0fa0(plVar2 + 3,param_2);
  (**(code **)(*plVar2 + 0x280))(plVar2,param_2);
  return plVar2;
}


