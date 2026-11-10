/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042cb90; name: FUN_0042cb90
 */


void FUN_0042cb90(undefined8 param_1,long param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  ulong __n;
  undefined1 auStack_2c0 [36];
  int local_29c;
  uint local_18c;
  long local_128;
  ulong local_118;
  ulong local_108;
  undefined1 *local_e8;
  
  local_18c = param_3 & 0xf00;
  uVar2 = local_18c;
  if (local_18c == 0x100) {
    uVar1 = param_3 >> 0xc & 0x637;
    uVar2 = uVar1 - (uVar1 >> 1 & 0xf1f1f1f1);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = uVar1 << 0xc | (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  }
  uVar2 = FUN_004699c0(uVar2,param_4);
  local_108 = (ulong)(uVar2 & 0xff);
  local_118 = (ulong)(param_3 & 0xff);
  local_29c = (param_3 & 0xff) * ((uVar2 & 0xff) + 3 >> 2) * 0x10;
  __n = (ulong)(uint)(local_29c * *(int *)(param_2 + 8));
  local_e8 = auStack_2c0 + -__n;
  local_128 = param_2;
                    /* WARNING: Subroutine does not return */
  memset(local_e8,0,__n);
}


