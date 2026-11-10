/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a68a00; name: FUN_00a68a00
 */


undefined8 FUN_00a68a00(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x580));
  if ((((((((uVar1 & 1) != 0) &&
          (uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x588)), (uVar1 & 1) != 0)) &&
         (uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x590)), (uVar1 & 1) != 0)) &&
        ((uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x598)), (uVar1 & 1) != 0 &&
         (uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x5a0)), (uVar1 & 1) != 0)))) &&
       ((uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x5a8)), (uVar1 & 1) != 0 &&
        ((uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x5b0)), (uVar1 & 1) != 0 &&
         (uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x548)), (uVar1 & 1) != 0)))))) &&
      (uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x550)), (uVar1 & 1) != 0)) &&
     ((((uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x558)), (uVar1 & 1) != 0 &&
        (uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x560)), (uVar1 & 1) != 0)) &&
       (uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x568)), (uVar1 & 1) != 0)) &&
      (((uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x570)), (uVar1 & 1) != 0 &&
        (uVar1 = FUN_00ad25c0(*(undefined8 *)(param_1 + 0x578)), (uVar1 & 1) != 0)) &&
       ((*(long *)(param_1 + 0x920) == 0 || (uVar1 = FUN_00aaa8a0(), (uVar1 & 1) != 0)))))))) {
    if (*(char *)(param_1 + 0xb98) != '\0') {
      if ((*(long *)(param_1 + 0xba0) != 0) && (uVar1 = FUN_00aad840(), (uVar1 & 1) == 0)) {
        return 0;
      }
      if ((*(long *)(param_1 + 0xba8) != 0) && (uVar1 = FUN_00aad840(), (uVar1 & 1) == 0)) {
        return 0;
      }
      if ((*(long *)(param_1 + 0xbb0) != 0) && (uVar1 = FUN_00aad840(), (uVar1 & 1) == 0)) {
        return 0;
      }
      if ((*(long *)(param_1 + 3000) != 0) && (uVar1 = FUN_00aad840(), (uVar1 & 1) == 0)) {
        return 0;
      }
      if ((*(long *)(param_1 + 0xbc0) != 0) && (uVar1 = FUN_00aad840(), (uVar1 & 1) == 0)) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0xb98) = 0;
    }
    if (((*(long *)(param_1 + 0xbd0) == 0) || (uVar1 = FUN_00aad840(), (uVar1 & 1) != 0)) &&
       ((*(long *)(param_1 + 0xbd8) == 0 || (uVar1 = FUN_00aad840(), (uVar1 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}


