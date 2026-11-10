/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cce470; name: FUN_00cce470
 */


void FUN_00cce470(long param_1,undefined4 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0x630) = param_2;
  *(byte *)(param_1 + 0x634) = param_3 & 1;
  if ((param_3 & 1) == 0) {
    switch(param_2) {
    case 0:
      uVar3 = 0x646669e0ff15;
      break;
    case 1:
      FUN_00cce790(param_1,0,1,1,0x47b0f86669de11ba,0);
      uVar2 = 0x47b0f96669de136d;
      uVar4 = 0;
      goto LAB_00cce6ec;
    case 2:
      uVar3 = 0x666669e1027b;
      break;
    case 3:
      FUN_00cce790(param_1,0,0,1,0xcbf29ce484222645,0);
      uVar2 = 1;
      uVar1 = 1;
      uVar4 = 0;
      goto LAB_00cce75c;
    default:
      goto switchD_00cce4ac_default;
    }
    FUN_00cce790(param_1,0,1,1,uVar3 | 0x47b4000000000000,0);
    uVar2 = 0x47b4636669e0fd62;
    uVar4 = 0x2000000000000;
LAB_00cce6ec:
    FUN_00cce790(param_1,1,1,1,uVar2,uVar4);
    FUN_00cce790(param_1,2,0,0,0xcbf29ce484222645,0);
    return;
  }
  switch(param_2) {
  case 0:
    FUN_00cce790(param_1,0,1,1,0x47b4626669e0fbaf,0);
    FUN_00cce790(param_1,1,1,1,0x47b4616669e0f9fc,0);
    FUN_00cce790(param_1,2,1,1,0x47b4636669e0fd62,0x2000000000000);
    return;
  case 1:
    uVar2 = 0x47b4636669e0fd62;
    uVar4 = 0x2000000000000;
    break;
  case 2:
    FUN_00cce790(param_1,0,1,1,0x47b4666669e1027b,0);
    FUN_00cce790(param_1,1,1,1,0x47b4636669e0fd62,0x2000000000000);
    uVar2 = 2;
    uVar4 = 1;
    uVar1 = 1;
    goto LAB_00cce75c;
  case 3:
    uVar2 = 0x47b4656669e100c8;
    uVar4 = 0;
    break;
  default:
switchD_00cce4ac_default:
    return;
  }
  FUN_00cce790(param_1,0,1,1,uVar2,uVar4);
  uVar2 = 1;
  uVar4 = 0;
  uVar1 = 0;
LAB_00cce75c:
  FUN_00cce790(param_1,uVar2,uVar4,uVar1,0xcbf29ce484222645,0);
  FUN_00cce790(param_1,2,0,0,0xcbf29ce484222645,0);
  return;
}


