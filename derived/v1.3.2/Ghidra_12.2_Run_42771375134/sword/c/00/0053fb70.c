/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053fb70; name: FUN_0053fb70
 */


ulong FUN_0053fb70(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = FUN_0053f720(param_1,uVar1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  uVar2 = FUN_0053f9f0(param_1,0);
  if (((((-1 < (int)uVar2) && (uVar2 = FUN_0053f9f0(param_1,1), -1 < (int)uVar2)) &&
       (uVar2 = FUN_0053f9f0(param_1,2), -1 < (int)uVar2)) &&
      (((uVar2 = FUN_0053f9f0(param_1,3), -1 < (int)uVar2 &&
        (uVar2 = FUN_0053f9f0(param_1,4), -1 < (int)uVar2)) &&
       ((uVar2 = FUN_0053f9f0(param_1,5), -1 < (int)uVar2 &&
        ((uVar2 = FUN_0053f9f0(param_1,6), -1 < (int)uVar2 &&
         (uVar2 = FUN_0053f9f0(param_1,7), -1 < (int)uVar2)))))))) &&
     ((uVar2 = FUN_0053f9f0(param_1,8), -1 < (int)uVar2 &&
      (((((uVar2 = FUN_0053f9f0(param_1,9), -1 < (int)uVar2 &&
          (uVar2 = FUN_0053f9f0(param_1,10), -1 < (int)uVar2)) &&
         (uVar2 = FUN_0053f9f0(param_1,0xb), -1 < (int)uVar2)) &&
        ((uVar2 = FUN_0053f9f0(param_1,0xc), -1 < (int)uVar2 &&
         (uVar2 = FUN_0053f9f0(param_1,0xd), -1 < (int)uVar2)))) &&
       (uVar2 = FUN_0053f9f0(param_1,0xe), -1 < (int)uVar2)))))) {
    uVar1 = FUN_0053f9f0(param_1,0xf);
    uVar2 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return uVar2;
}


