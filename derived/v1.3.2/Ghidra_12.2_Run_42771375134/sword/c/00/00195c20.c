/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00195c20; name: FUN_00195c20
 */


void FUN_00195c20(long *param_1,int param_2,byte param_3)

{
  long *__s;
  long lVar1;
  long lVar2;
  uint uVar3;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *(int *)((long)param_1 + 0xc) = param_2;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x7e7fffff7e7fffff;
  *(undefined8 *)((long)param_1 + 0x24) = 0xfe7fffff7e7fffff;
  *(byte *)(param_1 + 2) = param_3 & 1;
  uVar3 = (param_2 + 0x1fU >> 5) * 4;
  *param_1 = (long)(PTR_DAT_02710fc8 + 0x10);
  *(undefined8 *)((long)param_1 + 0x2c) = 0xfe7ffffffe7fffff;
  __s = param_1 + 0xc;
  *(uint *)(param_1 + 10) = param_2 + 0x1fU >> 5 | 0x80000000;
  lVar1 = (long)__s + (ulong)(uVar3 + 0xf & 0x3ffffff0);
  lVar2 = lVar1 + (ulong)(uint)(param_2 << 5);
  if ((param_3 & 1) == 0) {
    lVar2 = 0;
  }
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[7] = lVar1;
  param_1[8] = lVar2;
  param_1[9] = (long)__s;
                    /* try { // try from 00195cbc to 00195cc7 has its CatchHandler @ 00195cd8 */
                    /* WARNING: Subroutine does not return */
  memset(__s,0,(ulong)uVar3);
}


