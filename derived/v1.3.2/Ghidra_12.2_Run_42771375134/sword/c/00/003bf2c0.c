/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bf2c0; name: FUN_003bf2c0
 */


void FUN_003bf2c0(long *param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = param_1[9];
  uVar2 = *(uint *)(param_1 + 0x17);
  *param_1 = (long)(PTR_DAT_02712770 + 0x10);
                    /* try { // try from 003bf2f4 to 003bf353 has its CatchHandler @ 003bf378 */
  FUN_003be5f0(param_1[10],*(undefined8 *)(lVar1 + 0x1168),*(byte *)(param_1[10] + 0x2c) & 1);
  *(ushort *)((long)param_1 + 0xb4) = *(ushort *)((long)param_1 + 0xb4) | 8;
  FUN_003df9a0(lVar1,param_1);
  if (((param_1[0x18] == 0) || (FUN_003bbcc0(param_1[0x18],param_1), param_1[0x18] == 0)) &&
     ((*(uint *)(param_1 + 0x16) & 0x3f) == 0)) {
    FUN_001136f0(*(undefined8 *)(lVar1 + 0x748));
  }
  if (uVar2 < 0xfffffffe) {
    FUN_003dd7e0(lVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined8 *)param_1[10] = 0;
  FUN_003d9820(param_1);
  return;
}


