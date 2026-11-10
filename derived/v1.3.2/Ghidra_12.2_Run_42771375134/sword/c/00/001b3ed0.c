/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b3ed0; name: FUN_001b3ed0
 */


void FUN_001b3ed0(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    FUN_003ff570(*(undefined8 *)(param_1 + 0x68));
    uVar2 = *(uint *)(param_1 + 0xa4);
    if (uVar2 != 0) {
      uVar3 = (param_2 << 0x20 ^ 0xffffffffffffffffU) + param_2;
      uVar3 = uVar3 ^ uVar3 >> 0x16;
      uVar3 = uVar3 + (uVar3 << 0xd ^ 0xffffffffffffffff);
      uVar4 = (uVar3 ^ uVar3 >> 8) * 9;
      uVar4 = uVar4 ^ uVar4 >> 0xf;
      lVar7 = *(long *)(param_1 + 0x78);
      uVar4 = uVar4 + (uVar4 << 0x1b ^ 0xffffffffffffffff);
      uVar3 = 0;
      do {
        puVar1 = (undefined8 *)(lVar7 + uVar3 * 0x10);
        lVar5 = puVar1[1];
        if ((*(byte *)(lVar5 + 0x38) & param_4) != 0) {
          if (*(char *)(lVar5 + 0x39) == '\0') {
                    /* try { // try from 001b3fc0 to 001b4003 has its CatchHandler @ 001b402c */
            (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,param_2,param_3,param_4);
          }
          else if ((*(int *)(lVar5 + 0x34) != 0) &&
                  (uVar6 = *(uint *)(*(long *)(lVar5 + 0x18) +
                                    (ulong)(*(int *)(lVar5 + 0x24) - 1U &
                                           ((uint)(uVar4 >> 0x1f) ^ (uint)uVar4)) * 4),
                  uVar6 != 0xffffffff)) {
            do {
              if (*(long *)(*(long *)(lVar5 + 8) + (ulong)uVar6 * 8) == param_2) {
                if (*(long *)(lVar5 + 8) + (ulong)uVar6 * 8 != 0) {
                  (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,param_2,param_3,param_4)
                  ;
                }
                break;
              }
              uVar6 = *(uint *)(*(long *)(lVar5 + 0x10) + (ulong)uVar6 * 4);
            } while (uVar6 != 0xffffffff);
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
                    /* try { // try from 001b400c to 001b400f has its CatchHandler @ 001b4028 */
    FUN_003ff5a0(*(undefined8 *)(param_1 + 0x68));
  }
  return;
}


