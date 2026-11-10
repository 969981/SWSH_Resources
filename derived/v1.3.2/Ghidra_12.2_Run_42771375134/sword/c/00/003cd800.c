/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cd800; name: FUN_003cd800
 */


void FUN_003cd800(long param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                 undefined8 param_6,uint param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong local_38;
  char local_24 [4];
  
  if (param_5 == 0) {
    uVar2 = param_3;
    if (param_2 <= param_3) {
      uVar2 = param_2;
    }
    uVar1 = param_3;
    if (param_3 <= param_2) {
      uVar1 = param_2;
    }
    if ((*(int *)(param_1 + 0x158c) != 0) &&
       (uVar8 = ((uint)uVar1 & 0x3fffc) << 0xe | (uint)uVar2 >> 2 & 0xffff,
       uVar8 = uVar8 + (uVar8 << 0xf ^ 0xffffffff), uVar8 = (uVar8 ^ uVar8 >> 10) * 9,
       uVar8 = uVar8 ^ uVar8 >> 6, uVar8 = uVar8 + (uVar8 << 0xb ^ 0xffffffff),
       uVar8 = *(uint *)(*(long *)(param_1 + 0x1570) +
                        (ulong)(*(int *)(param_1 + 0x157c) - 1U & (uVar8 ^ uVar8 >> 0x10)) * 4),
       uVar8 != 0xffffffff)) {
      lVar3 = *(long *)(param_1 + 0x1560);
      do {
        uVar7 = (ulong)uVar8;
        if ((*(ulong *)(lVar3 + (ulong)uVar8 * 0x18) == uVar2) &&
           (*(ulong *)(lVar3 + uVar7 * 0x18 + 8) == uVar1)) {
          if (lVar3 + uVar7 * 0x18 != 0) {
            param_5 = *(long *)(lVar3 + uVar7 * 0x18 + 0x10);
            goto joined_r0x003cd9ac;
          }
          break;
        }
        uVar8 = *(uint *)(*(long *)(param_1 + 0x1568) + uVar7 * 4);
      } while (uVar8 != 0xffffffff);
    }
  }
  else {
joined_r0x003cd9ac:
    if (param_5 != 0) {
      FUN_003cd9e0(param_1,param_5,4,param_4,1,param_6,param_7 & 1);
    }
  }
  uVar2 = param_3;
  if ((*(uint *)(param_2 + 0x18) & 0x60000000) != 0x40000000) {
    uVar2 = param_2;
    param_2 = param_3;
  }
  if (((*(uint *)(param_2 + 0x18) & 0x60000000) == 0x40000000) &&
     ((*(byte *)(uVar2 + 0x1b) & 0x60) == 0)) {
    lVar3 = FUN_003ae360(*(undefined8 *)(param_2 + 0x20));
    FUN_003b8570(lVar3,uVar2);
    local_38 = uVar2;
    puVar4 = (ulong *)FUN_003d6d40(param_1 + 0x1498,&local_38,local_24);
    if (local_24[0] == '\0') {
      *puVar4 = local_38;
      puVar4[1] = 0;
      puVar4[2] = 0;
    }
    else {
      plVar5 = (long *)puVar4[2];
      puVar4 = puVar4 + 2;
      while (plVar5 != (long *)0x0) {
        puVar6 = (ulong *)(plVar5 + 1);
        if (*plVar5 == lVar3) {
          *puVar4 = plVar5[1];
          *(int *)(param_1 + 0x1484) = *(int *)(param_1 + 0x1484) + -1;
          *plVar5 = *(long *)(param_1 + 0x1490);
          *(long **)(param_1 + 0x1490) = plVar5;
          return;
        }
        puVar4 = puVar6;
        plVar5 = (long *)*puVar6;
      }
    }
  }
  return;
}


