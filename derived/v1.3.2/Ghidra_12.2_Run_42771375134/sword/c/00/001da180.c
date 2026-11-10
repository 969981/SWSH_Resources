/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001da180; name: FUN_001da180
 */


long * FUN_001da180(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  *(undefined2 *)((long)plVar4 + 10) = 0;
  *plVar4 = (long)(PTR_DAT_02711090 + 0x10);
                    /* try { // try from 001da1b4 to 001da1bf has its CatchHandler @ 001da2ac */
  FUN_00206e40(plVar4 + 5,0);
  *(undefined4 *)(plVar4 + 10) = 0xffffffff;
  *(uint *)(plVar4 + 0xd) = *(uint *)(plVar4 + 0xd) & 0xf000000;
  plVar4[0xc] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  *(undefined1 *)((long)plVar4 + 0x8e) = 0;
  *(undefined2 *)((long)plVar4 + 0x12e) = 0;
  *(undefined4 *)(plVar4 + 0x2f) = 1;
  puVar2 = PTR_DAT_02711098;
  plVar4[0x26] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  if (plVar4[0x38] != 0) {
    *(uint *)((long)plVar4 + 0x1cc) = *(uint *)((long)plVar4 + 0x1cc) | 0x80000000;
  }
  if ((char)plVar4[0x37] != '\0') {
    plVar4[0x38] = (long)(plVar4 + 0x33);
  }
  *param_1 = *param_1 + 0x1d0;
  FUN_00206f30(plVar4 + 5,param_2);
  FUN_001e0fa0(plVar4 + 3,param_2);
  if ((((char)plVar4[0x37] == '\0') && (plVar4[0x38] != 0)) &&
     (uVar1 = *(uint *)((long)plVar4 + 0x1cc) & 0x7fffffff, uVar1 != 0 || (int)plVar4[0x39] != 0)) {
    lVar3 = *(long *)(param_2 + 8);
    *(ulong *)(param_2 + 8) = lVar3 + (ulong)uVar1 * 8;
    plVar4[0x38] = lVar3;
  }
  (**(code **)(*plVar4 + 0x1e0))(plVar4,param_2);
  return plVar4;
}


