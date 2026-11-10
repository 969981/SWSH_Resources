/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009653a0; name: FUN_009653a0
 */


void FUN_009653a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined1 local_38 [4];
  char local_34 [4];
  undefined8 in_stack_ffffffffffffffd0;
  ulong in_stack_ffffffffffffffd8;
  
  FUN_00943e70(param_2);
  uVar4 = FUN_00965600(param_3);
  cVar3 = (char)(in_stack_ffffffffffffffd8 >> 0x20);
  switch(uVar4) {
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    cVar3 = FUN_00965600(param_3);
    FUN_00964760(local_34,local_38,param_3);
    if (local_34[0] != '\0') {
      if (local_34[0] == '\x01') {
        uVar5 = FUN_00965630(param_3,local_38[0]);
        if (0xc < (byte)(cVar3 - 9U)) {
          return;
        }
        uVar1 = *(undefined4 *)((&PTR_DAT_0261f7a0)[(char)(cVar3 - 9U)] + 4);
        FUN_00943f20(param_2,2,*(undefined2 *)((&PTR_DAT_0261f7a0)[(char)(cVar3 - 9U)] + 0xe));
        FUN_00943f60(param_2,local_38[0]);
        FUN_00943f60(param_2,uVar1);
      }
      else {
        if (0xc < (byte)(cVar3 - 9U)) {
          return;
        }
        puVar8 = (&PTR_DAT_0261f7a0)[(char)(cVar3 - 9U)];
        uVar1 = *(undefined4 *)(puVar8 + 4);
        uVar5 = *(undefined4 *)(puVar8 + 8);
        FUN_00943f20(param_2,1,*(undefined2 *)(puVar8 + 0x10));
        FUN_00943f60(param_2,uVar1);
      }
      FUN_00943f60(param_2,uVar5);
    }
    return;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    break;
  default:
    return;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2c:
  case 0x2d:
    iVar6 = FUN_00965600(param_3);
    FUN_009651a0(local_34 + 0x10,local_34 + 0xc,param_3);
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        uVar2 = iVar6 - 0x25;
        if (((uVar2 & 0xff) < 9) && ((0x1b7U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
          FUN_00943f20(param_2,2,*(undefined2 *)((&PTR_DAT_0261f810)[(char)uVar2] + 2));
          FUN_00943f60(param_2,in_stack_ffffffffffffffd8 & 0xff);
          return;
        }
      }
      else {
        uVar2 = iVar6 - 0x25;
        if (((uVar2 & 0xff) < 9) && ((0x1b7U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
          FUN_00943f20(param_2,1,*(undefined2 *)((&PTR_DAT_0261f810)[(char)uVar2] + 4));
        }
      }
    }
    return;
  case 0x2e:
    FUN_00964f30(local_34 + 0x10,local_34 + 0xc,local_34 + 8,param_3);
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        iVar6 = (int)((ulong)in_stack_ffffffffffffffd0 >> 0x20);
        if (iVar6 - 1U < 5) {
          puVar8 = &UNK_0214b85c;
          switch(iVar6) {
          case 2:
            puVar8 = &UNK_0214b864;
            break;
          case 3:
            puVar8 = &UNK_0214b86c;
            break;
          case 4:
            puVar8 = &UNK_0214b874;
            break;
          case 5:
            puVar8 = &UNK_0214b87c;
          }
          FUN_00943f20(param_2,2,*(undefined2 *)(puVar8 + 4));
          FUN_00943f60(param_2,in_stack_ffffffffffffffd8 & 0xff);
          return;
        }
      }
      else {
        FUN_00943f20(param_2,1,0x1c4);
      }
    }
    return;
  }
  FUN_009649d0(local_34 + 0x10,local_34 + 0xc,local_34 + 8,local_34 + 4,param_3);
  if (cVar3 != '\0') {
    if (cVar3 != '\x01') {
      if ((char)in_stack_ffffffffffffffd8 == '\x01') {
        puVar8 = &UNK_0214b830;
        switch((short)in_stack_ffffffffffffffd0) {
        case 0x2a:
          puVar8 = &UNK_0214b836;
          break;
        case 0x2b:
          puVar8 = &UNK_0214b848;
          break;
        case 0x2c:
          puVar8 = &UNK_0214b842;
          break;
        case 0x2d:
          puVar8 = &UNK_0214b83c;
          break;
        case 0x2e:
          break;
        case 0x2f:
          puVar8 = &UNK_0214b84e;
          break;
        case 0x30:
          puVar8 = &UNK_0214b854;
          break;
        default:
          goto switchD_00964e18_default;
        }
        uVar7 = *(undefined2 *)(puVar8 + 4);
      }
      else {
        uVar7 = 0x1c3;
      }
      FUN_00943f20(param_2,1,uVar7);
      return;
    }
    puVar8 = &UNK_0214b830;
    switch((short)in_stack_ffffffffffffffd0) {
    case 0x2a:
      puVar8 = &UNK_0214b836;
      break;
    case 0x2b:
      puVar8 = &UNK_0214b848;
      break;
    case 0x2c:
      puVar8 = &UNK_0214b842;
      break;
    case 0x2d:
      puVar8 = &UNK_0214b83c;
      break;
    case 0x2e:
      break;
    case 0x2f:
      puVar8 = &UNK_0214b84e;
      break;
    case 0x30:
      puVar8 = &UNK_0214b854;
      break;
    default:
      goto switchD_00964e18_default;
    }
    FUN_00943f20(param_2,2,*(undefined2 *)(puVar8 + 2));
    FUN_00943f60(param_2,(char)((ulong)in_stack_ffffffffffffffd0 >> 0x20));
  }
switchD_00964e18_default:
  return;
}


