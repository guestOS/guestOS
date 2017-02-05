#if defined(__linux__) && defined(__LP64__)
#   define COCOTRON_DISALLOW_FORWARDING 1  // Unimplemented on 64-bit Linux
#endif

#ifdef COCOTRON_DISALLOW_FORWARDING
#warning Forwading is unavailable

#import <Foundation/NSException.h>
#import <Foundation/NSString.h>
#import <objc/message.h>

id objc_msgSendv(id self, SEL selector, unsigned arg_size, void *arg_frame)
{
	[NSException raise:@"OBJCForwardingUnavailableException" format:@"Sorry, but objc_msgSendv and forwarding including NSInvocation are unavailable on this platform."];
	return nil;
}

#endif
