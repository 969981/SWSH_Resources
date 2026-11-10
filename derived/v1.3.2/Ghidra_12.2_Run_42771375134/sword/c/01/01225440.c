/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01225440; name: FUN_01225440
 */


void FUN_01225440(long param_1,long *param_2)

{
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  
  if ((*param_2 != 0) && (0x27 < (ulong)param_2[1])) {
    FUN_0121ad90(&local_d0,*param_2,0x28);
    *(undefined8 *)(param_1 + 0x1f8) = local_d0;
    *(undefined8 *)(param_1 + 0x210) = local_b8;
    *(undefined8 *)(param_1 + 0x218) = local_b0;
    *(undefined8 *)(param_1 + 0x208) = local_c0;
    *(undefined8 *)(param_1 + 0x200) = local_c8;
    if (*(char *)(param_1 + 0x1f0) == '\0') {
      *(undefined1 *)(param_1 + 0x1f0) = 1;
    }
    if ((*param_2 != 0) && (0x58 < (ulong)param_2[1])) {
      FUN_0121cd80(&local_d0,*param_2 + 0x28,0x31);
      *(undefined8 *)(param_1 + 0x1ac) = local_c8;
      *(undefined8 *)(param_1 + 0x1a4) = local_d0;
      *(undefined8 *)(param_1 + 0x1cc) = uStack_a8;
      *(undefined8 *)(param_1 + 0x1c4) = local_b0;
      *(undefined8 *)(param_1 + 0x1bc) = local_b8;
      *(undefined8 *)(param_1 + 0x1b4) = local_c0;
      *(undefined4 *)(param_1 + 0x1ec) = local_88;
      *(undefined8 *)(param_1 + 0x1dc) = uStack_98;
      *(undefined8 *)(param_1 + 0x1e4) = local_90;
      *(undefined8 *)(param_1 + 0x1d4) = local_a0;
      if (*(char *)(param_1 + 0x1a0) == '\0') {
        *(undefined1 *)(param_1 + 0x1a0) = 1;
      }
      if ((*param_2 != 0) && (0x8f < (ulong)param_2[1])) {
        FUN_01223900(&local_d0,*param_2 + 0x59,0x37);
        if (*(char *)(param_1 + 0xe0) == '\0') {
          memcpy((void *)(param_1 + 0xf0),&local_d0,0xb0);
          *(undefined1 *)(param_1 + 0xe0) = 1;
        }
        else {
          memcpy((void *)(param_1 + 0xf0),&local_d0,0xa1);
        }
      }
    }
  }
  FUN_012255b0(param_1,param_2);
  return;
}


