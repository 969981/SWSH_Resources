/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009187c0; name: FUN_009187c0
 */


void FUN_009187c0(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_02717d70 + 0x10);
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_2[3];
  param_1[5] = param_2[4];
  param_1[6] = param_2[5];
  param_1[7] = param_2[6];
  lVar1 = param_2[7];
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined2 *)((long)param_1 + 0x56) = 4;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined2 *)((long)param_1 + 0x5e) = 4;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 0x62) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *(undefined2 *)((long)param_1 + 0x66) = 4;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((long)param_1 + 0x6a) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined2 *)((long)param_1 + 0x6e) = 4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((long)param_1 + 0x72) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined2 *)((long)param_1 + 0x76) = 4;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  *(undefined2 *)((long)param_1 + 0x82) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  param_1[8] = lVar1;
  return;
}


