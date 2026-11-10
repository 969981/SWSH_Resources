/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f4c10; name: FUN_012f4c10
 */


void FUN_012f4c10(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x30;
    FUN_0075efb0(auStack_38,*(undefined8 *)(lVar3 + -0x28),0,1);
    puVar2 = *(undefined8 **)(lVar3 + -0x20);
    *(undefined8 *)(lVar3 + -0x20) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(lVar3 + -0x18) + 0x18))
                (*(long **)(lVar3 + -0x18),puVar2,*(undefined8 *)(lVar3 + -0x10),
                 *(undefined8 *)(lVar3 + -8));
    }
    FUN_0075f0a0(auStack_38);
    puVar2 = *(undefined8 **)(lVar3 + -0x20);
    *(undefined8 *)(lVar3 + -0x20) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(lVar3 + -0x18) + 0x18))
                (*(long **)(lVar3 + -0x18),puVar2,*(undefined8 *)(lVar3 + -0x10),
                 *(undefined8 *)(lVar3 + -8));
    }
    lVar3 = param_1[2];
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar1,param_1[3] - lVar1,8);
  }
  return;
}


