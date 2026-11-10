/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01418f00; name: FUN_01418f00
 */


undefined8 FUN_01418f00(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = param_2;
  lVar1 = FUN_0140e590(*(undefined8 *)*param_1,0);
  if ((*(long *)(lVar1 + 8) == 0) ||
     (uVar2 = FUN_006e7220(*(long *)(lVar1 + 8),&local_18), (int)uVar2 == -1)) {
    lVar1 = FUN_0140e590(*(undefined8 *)*param_1,1);
    if ((*(long *)(lVar1 + 8) == 0) ||
       (uVar2 = FUN_006e7220(*(long *)(lVar1 + 8),&local_18), (int)uVar2 == -1)) {
      lVar1 = FUN_0140e590(*(undefined8 *)*param_1,2);
      if ((*(long *)(lVar1 + 8) == 0) ||
         (uVar2 = FUN_006e7220(*(long *)(lVar1 + 8),&local_18), (int)uVar2 == -1)) {
        lVar1 = FUN_0140e590(*(undefined8 *)*param_1,3);
        if ((*(long *)(lVar1 + 8) == 0) ||
           (uVar2 = FUN_006e7220(*(long *)(lVar1 + 8),&local_18), (int)uVar2 == -1)) {
          lVar1 = FUN_0140e590(*(undefined8 *)*param_1,4);
          if ((*(long *)(lVar1 + 8) == 0) ||
             (uVar2 = FUN_006e7220(*(long *)(lVar1 + 8),&local_18), (int)uVar2 == -1)) {
            return 0xffffffff;
          }
        }
      }
    }
  }
  return uVar2;
}


