/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00901bb0; name: FUN_00901bb0
 */


undefined8 FUN_00901bb0(long param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = FUN_008f89e0(*(undefined8 *)(param_1 + 0x58));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  cVar1 = FUN_00901e30(param_1);
  *param_2 = cVar1;
  if (cVar1 < '\0') {
    cVar1 = '\x01';
    uVar2 = FUN_00901fa0(param_1,1);
    if ((uVar2 & 1) == 0) {
      cVar1 = '\x02';
      uVar2 = FUN_00901fa0(param_1,2);
      if ((uVar2 & 1) == 0) {
        cVar1 = '\x03';
        uVar2 = FUN_00901fa0(param_1,3);
        if ((uVar2 & 1) == 0) {
          cVar1 = '\x04';
          uVar2 = FUN_00901fa0(param_1,4);
          if ((uVar2 & 1) == 0) {
            *param_2 = -1;
            return 0;
          }
        }
      }
    }
    *param_2 = cVar1;
    *param_3 = 2;
  }
  else {
    *param_3 = 0;
  }
  return 1;
}


