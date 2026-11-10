/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2fb0; name: FUN_007c2fb0
 */


void FUN_007c2fb0(long param_1,char *param_2)

{
  uint local_60 [4];
  uint local_50 [4];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*param_2 == '\0') {
    if (*(char *)(param_1 + 0x168) == '\0') goto LAB_007c3064;
LAB_007c3048:
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x168) != '\0') {
      FUN_018724d0(local_50,param_1 + 0x16c);
      FUN_018724d0(local_60,param_2 + 4);
      if ((local_60[0] >> 0xd & 0x1f) < (local_50[0] >> 0xd & 0x1f)) goto LAB_007c3064;
      if (*(char *)(param_1 + 0x168) != '\0') {
        if (*param_2 != '\0') {
          FUN_018725b0(param_1 + 0x16c,param_2 + 4);
          goto LAB_007c3064;
        }
        goto LAB_007c3048;
      }
      if (*param_2 == '\0') goto LAB_007c3064;
    }
    FUN_018724d0(param_1 + 0x16c,param_2 + 4);
    *(undefined1 *)(param_1 + 0x168) = 1;
  }
LAB_007c3064:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  return;
}


