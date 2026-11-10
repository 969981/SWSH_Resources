/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f3750; name: FUN_001f3750
 */


long * FUN_001f3750(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *(undefined2 *)((long)plVar2 + 10) = 2;
  *plVar2 = (long)(PTR_DAT_02711170 + 0x10);
                    /* try { // try from 001f3788 to 001f3793 has its CatchHandler @ 001f3814 */
  FUN_00206e40(plVar2 + 5,0);
  *(undefined4 *)(plVar2 + 10) = 0xffffffff;
  puVar1 = PTR_DAT_02711178;
  plVar2[0xc] = 0;
  plVar2[0xe] = 0;
  plVar2[0x10] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(uint *)(plVar2 + 0xd) = *(uint *)(plVar2 + 0xd) & 0xf000000;
  *(undefined1 *)((long)plVar2 + 0x8e) = 0;
  *param_1 = *param_1 + 0xb0;
  FUN_00206f30(plVar2 + 5,param_2);
  FUN_001e0fa0(plVar2 + 3,param_2);
  (**(code **)(*plVar2 + 0xf8))(plVar2,param_2);
  return plVar2;
}


